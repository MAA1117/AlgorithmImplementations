#include <bits/stdc++.h>
using namespace std;

int main() {
  int left = 1;
  int right = 1000000;
  string s;
  int mid = 0;
  while (left <= right) {
    mid = left + (right - left) / 2;
    cout << mid << endl;
    cin >> s;
    if (s == "<") {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  cout << "! ";
  if (s == "<") {
    cout << mid - 1 << endl;
  } else {
    cout << mid << endl;
  }
}
