// https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; ++i){
    cin >> v[i];
  }
  sort(v.begin(), v.end(), [](int a, int b){return a>b;});
  for(int x:v){
    cout << x << " ";
  }
  cout << endl;
}
