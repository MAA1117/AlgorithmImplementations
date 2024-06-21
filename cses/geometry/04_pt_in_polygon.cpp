// https://cses.fi/problemset/task/2192

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double f64;

const double EPSILON = 1e-10;
const ll INF = 3e9;

struct Pt {
  ll x, y;
  void read() { cin >> x >> y; }
  Pt operator+(const Pt &p) const { return {x + p.x, y + p.y}; }
  Pt operator-(const Pt &p) const { return {x - p.x, y - p.y}; }
  ll operator*(const Pt &p) const { return x * p.y - y * p.x; }
  void operator+=(const Pt &p) {
    x += p.x;
    y += p.y;
  }
  void operator-=(const Pt &p) {
    x -= p.x;
    y -= p.y;
  }
  ll triangle(const Pt &p1, const Pt &p2) const {
    return (p1 - *this) * (p2 - *this);
  }
  f64 dist(const Pt &p) const {
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
  }
};

bool intersect(Pt p1, Pt p2, Pt p3, Pt p4) {
  if ((p2 - p1) * (p4 - p3) == 0) {
    if (p1.triangle(p2, p3) != 0) {
      return false;
    }
    for (int i = 0; i < 2; i++) {
      if (max(p1.x, p2.x) < min(p3.x, p4.x) ||
          max(p1.y, p2.y) < min(p3.y, p4.y)) {
        return false;
      }
      swap(p1, p3);
      swap(p2, p4);
    }
    return true;
  }
  for (int i = 0; i < 2; i++) {
    ll sign1 = (p2 - p1) * (p3 - p1);
    ll sign2 = (p2 - p1) * (p4 - p1);
    if ((sign1 < 0 && sign2 < 0) || (sign1 > 0 && sign2 > 0)) {
      return false;
    }
    swap(p1, p3);
    swap(p2, p4);
  }
  return true;
}

bool segment_contains(Pt p, Pt segment1, Pt segment2) {
  if (p.triangle(segment1, segment2) != 0) {
    return false;
  }
  return min(segment1.x, segment2.x) <= p.x &&
         p.x <= max(segment1.x, segment2.x) &&
         min(segment1.y, segment2.y) <= p.y &&
         p.y <= max(segment1.y, segment2.y);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<Pt> v(n);
  for (Pt &p : v) {
    p.read();
  }
  for (int i = 0; i < m; ++i) {
    Pt p;
    p.read();
    Pt outside = Pt{p.x + 1, (ll)INF + 1};
    int count = 0;
    bool on_boundary = false;
    for (int i = 0; i < n; ++i) {
      int j = (i == n - 1 ? 0 : i + 1);
      if (segment_contains(p, v[i], v[j])) {
        on_boundary = true;
        break;
      }
      if (intersect(p, outside, v[i], v[j])) {
        count++;
      }
    }
    if (on_boundary) {
      cout << "BOUNDARY\n";
    } else if (count % 2 == 0) {
      cout << "OUTSIDE\n";
    } else {
      cout << "INSIDE\n";
    }
  }
}
