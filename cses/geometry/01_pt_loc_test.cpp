// https://cses.fi/problemset/task/2189

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double f64;

// const double EPSILON = 1e-10;

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
  int t;
  cin >> t;

  while (t--) {
    Pt p1, p2, p3;
    p1.read();
    p2.read();
    p3.read();

    ll x = p1.triangle(p2, p3);
    if (x < 0) {
      cout << "RIGHT\n";
    } else if (x > 0) {
      cout << "LEFT\n";
    } else {
      cout << "TOUCH\n";
    }
  }
}
