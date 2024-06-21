// real code start at line 40

#include "timer.h"
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define D 320
#define MOD 1000000007
#define INF 1000000000000000000
#define NA -1

#define MASK(i) (1 << (i))
#define GETBIT(mask, i) (((mask) >> (i)) & 1)
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define ALL(v) (v).begin(), (v).end()
#define v1 vector<ll>
#define v2 vector<v1>
#define v3 vector<v2>

template <class T1, class T2> bool maximize(T1 &a, T2 b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template <class T1, class T2> bool minimize(T1 &a, T2 b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

template <class T> void printArr(vector<T> &a, char separator = ' ') {
  for (const T &i : a)
    cout << i << separator;
  cout << "\n";
}

ll gcd(ll a, ll b) {
  while (a > 0 && b > 0) {
    if (a > b)
      a %= b;
    else
      b %= a;
  }
  return a ^ b;
}

struct Point {
  ll x, y;
  Point() {}
  Point(ll a, ll b) { x = a, y = b; }
  bool operator>(Point b) {
    if (x != b.x)
      return x > b.x;
    return y > b.y;
  }

  bool operator<(Point b) {
    if (x != b.x)
      return x < b.x;
    return y < b.y;
  }

  bool operator==(Point b) {
    if (x != b.x)
      return false;
    return y == b.y;
  }
};

bool compare(Point a, Point b) {
  if (a.x != b.x)
    return a.x < b.x;
  return a.y < b.y;
}

ll getArea(Point a, Point b, Point c) {
  return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
}

istream &operator>>(istream &is, Point &a) {
  is >> a.x >> a.y;
  return is;
}

ostream &operator<<(ostream &os, Point &a) {
  os << a.x << " " << a.y;
  return os;
}

ll getAreaPoly(vector<Point> &a) {
  long n = a.size();
  ll ans = 0;
  for (long i = 0; i < n; ++i) {
    long nxt = (i + 1) % n;
    ans += (a[i].x - a[nxt].x) * (a[i].y + a[nxt].y);
  }
  return ans;
}

ll LatticeEdge(Point a, Point b) {
  ll x = abs(a.x - b.x);
  ll y = abs(a.y - b.y);
  return gcd(x, y) - 1;
}

int main() {
  Stopwatch timer;
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long n;
  cin >> n;

  vector<Point> a(n);
  for (long i = 0; i < n; ++i)
    cin >> a[i];

  ll area = abs(getAreaPoly(a));
  ll boundary = n;
  for (long i = 0; i < n; ++i)
    boundary += LatticeEdge(a[i], a[(i + 1) % n]);
  ll Ligma = (area + 2 - boundary) / 2;
  cout << Ligma << " " << boundary << "\n";

  return 0;
}
