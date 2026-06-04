#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int coinChange(vector<int> &coins, int amount) {
    // dp[amount] = minimum combination of coin
    if (amount == 0) {
      return 0;
    }

    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i < dp.size(); i++) {
      for (int j = 0; j < coins.size(); j++) {
        if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX) {
          dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
      }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];
  }
};

int main() {
  Solution sol;
  vector<int> coins = {2};
  int amount = 3;
  int result = sol.coinChange(coins, amount);
  cout << result << endl;
}
