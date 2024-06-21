// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
    vector<char> v(5);
    for (int i = 0; i < 5; ++i) {
        cin >> v[i];
    }
    int hour = (v[0] - '0') * 10 + (v[1] - '0');
    int minute = (v[3] - '0') * 10 + (v[4] - '0');
    string am_pm = " AM";
    if (hour >= 12) {
        am_pm = " PM";
        if (hour > 12) {
            hour -= 12;
        }
    }
    if (hour == 0) {
        hour = 12;
    }
    cout << setw(2) << setfill('0') << hour << ":" 
         << setw(2) << setfill('0') << minute << am_pm << "\n";
}


int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
