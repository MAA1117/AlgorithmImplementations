// https://codeforces.com/problemset/problem/1714/C

#include <iostream>
using namespace std;

const int answers[] = {
    1,       2,       3,        4,        5,        6,      7,      8,
    9,       19,      29,       39,       49,       59,     69,     79,
    89,      189,     289,      389,      489,      589,    689,    789,
    1789,    2789,    3789,     4789,     5789,     6789,   16789,  26789,
    36789,   46789,   56789,    156789,   256789,   356789, 456789, 1456789,
    2456789, 3456789, 13456789, 23456789, 123456789
};

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {

    int n; cin >> n; --n;

    cout << answers[n] << '\n';
  }
}
