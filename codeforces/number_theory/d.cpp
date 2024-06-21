// accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> find_divisors(ll n) {
    vector<ll> divisors;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    divisors.erase(unique(divisors.begin(), divisors.end()), divisors.end());
    return divisors;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> divs = find_divisors(n);
    vector<ll> ans = {1, n * (n + 1) / 2};
    for (ll x : divs) {
        ll len = n / x;
        ll fv = x * (len * (len - 1) / 2) + len;
        ans.push_back(fv);
    }
    sort(ans.begin(), ans.end());
    for (ll it : ans) {
        cout << it << " ";
    }
}
