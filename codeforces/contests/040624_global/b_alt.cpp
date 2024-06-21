#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr);

  int test_cases;
  std::cin >> test_cases;

  while (test_cases--) {
    int n, k, ans = 0;
    std::cin >> n >> k; --k;
    std::vector<int> v(n);
    for (auto &a : v) std::cin >> a;
    int vk = v[k];

    auto check = [&]() -> void {
      int cnt = 0, cur = v[0];
      for (int i = 1; i < n; ++i) {
        cur = std::max(cur, v[i]);
        if (cur == vk) ++cnt;
      }
      ans = std::max(ans, cnt);
    };

    std::swap(v[k], v[0]);
    check();
    std::swap(v[k], v[0]);

    for (int i = 0; i < n; ++i) {
      if (v[i] > vk) {
        std::swap(v[k], v[i]);
        check();
        std::swap(v[k], v[i]);
        break;
      }
    }
    std::cout << ans << '\n';
  }
}
