// https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>
using namespace std;

int main() {
  //  freopen("test_input.txt", "r", stdin);
  string s;
  cin >> s;
  int sz1 = s.size();
  sort(s.begin(), s.end());
  int cur = 1;
  vector<pair<char, int>> charcount;
  pair<char, int> odd = {'0', 0};
  for (int i = 1; i < sz1; i++) {
    if (s[i] == s[i - 1]) {
      cur++;
    } else {
      if (cur % 2) {
        if (odd.second != 0 || sz1 % 2 == 0) {
          puts("NO SOLUTION");
          return 0;
        }
        odd = make_pair(s[i - 1], cur);
        cur = 1;
        continue;
      }
      charcount.push_back(make_pair(s[i - 1], cur));
      cur = 1;
    }
  }
  if (cur % 2) {
    if (odd.second != 0 || sz1 % 2 == 0) {
      puts("NO SOLUTION");
      return 0;
    }
    odd = make_pair(s[sz1 - 1], cur);
  } else {
    charcount.push_back(make_pair(s[sz1 - 1], cur));
  }
  int sz2 = charcount.size();
  for (int i = 0; i < sz2; i++) {
    for (int j = 0; j < charcount[i].second / 2; j++) {
      cout << charcount[i].first;
    }
  }
  for (int i = 0; i < odd.second; i++) {
    cout << odd.first;
  }
  for (int i = 0; i < sz2; i++) {
    for (int j = 0; j < charcount[sz2 - 1 - i].second / 2; j++) {
      cout << charcount[sz2 - i - 1].first;
    }
  }
  cout << endl;
}
