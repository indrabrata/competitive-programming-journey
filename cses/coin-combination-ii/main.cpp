#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }

  vector<long long> dp(x + 1);
  dp[0] = 1;
  for (int i = 0; i < coins.size(); i++) {
    for (int j = 1; j < dp.size(); j++) {
      if (j - coins[i] >= 0) {
        dp[j] += dp[j - coins[i]];
        dp[j] %= 1000000007;
      }

      // cout << j << " " << dp[j] << endl;
    }
  }

  cout << dp[x] << endl;
  return 0;
}

// 3 9
// 2 3 5
