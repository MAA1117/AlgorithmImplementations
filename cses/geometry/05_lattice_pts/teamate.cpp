#include "timer.h"
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5001;
struct Point {
  ll x, y;
  void input() { cin >> x >> y; }
  Point operator+(const Point &b) const { return Point{x + b.x, y + b.y}; }
  Point operator-(const Point &b) const { return Point{x - b.x, y - b.y}; }
  ll operator*(const Point &b) const { return (ll)x * b.y - (ll)y * b.x; }
  void operator+=(const Point &b) {
    x += b.x;
    y += b.y;
  }
  void operator-=(const Point &b) {
    x -= b.x;
    y -= b.y;
  }
  void operator*=(const int k) {
    x *= k;
    y *= k;
  }
} p[N];
int n;

int main(int argc, char const *argv[]) {
  Stopwatch timer;
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    p[i].input();
  }
  p[n] = p[0];

  // boundary points:
  // https://math.stackexchange.com/questions/2956889/how-many-number-of-integer-coordinates-exists-between-a-line-segment-including
  // Pick's theorem: https://en.wikipedia.org/wiki/Pick%27s_theorem#Formula
  ll area = 0;
  ll b_points = 0;
  for (int i = 0; i < n; ++i) {
    b_points += __gcd(abs(p[i].x - p[i + 1].x), abs(p[i].y - p[i + 1].y));
    area += (p[i].x * p[i + 1].y - p[i + 1].x * p[i].y);
  }
  area = abs(area) / 2;
  cout << area - b_points / 2 + 1 << " ";
  cout << b_points;

  return 0;
}
