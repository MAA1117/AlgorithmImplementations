// https://cses.fi/problemset/task/2190

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double f64;

const double EPSILON = 1e-10;

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

void solve() {
  Pt p1, p2, p3, p4;
  p1.read();
  p2.read();
  p3.read();
  p4.read();

  if ((p2 - p1) * (p4 - p3) == 0) {
    if (p1.triangle(p2, p3) != 0) {
      cout << "NO\n";
      return;
    }
    for (int i = 0; i < 2; i++) {
      if (max(p1.x, p2.x) < min(p3.x, p4.x) ||
          max(p1.y, p2.y) < min(p3.y, p4.y)) {
        cout << "NO\n";
        return;
      }
      swap(p1, p3);
      swap(p2, p4);
    }
    cout << "YES\n";
    return;
  }
  for (int i = 0; i < 2; i++) {
    ll sign1 = (p2 - p1) * (p3 - p1);
    ll sign2 = (p2 - p1) * (p4 - p1);
    if ((sign1 < 0 && sign2 < 0) || (sign1 > 0 && sign2 > 0)) {
      cout << "NO\n";
      return;
    }
    swap(p1, p3);
    swap(p2, p4);
  }
  cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
