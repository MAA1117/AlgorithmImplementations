// https://cses.fi/problemset/task/2191

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

int main() {
  int n;
  cin >> n;
  vector<Pt> v(n);
  for (Pt &p : v) {
    p.read();
  }
  ll area = 0;
  Pt p0 = v[0];
  for (int i = 1; i < n - 1; i++) {
    area += p0.triangle(v[i], v[i + 1]);
  }
  cout << abs(area) << '\n';
}
