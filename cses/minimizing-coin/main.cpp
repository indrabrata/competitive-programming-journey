#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;

  vector<int> coins(n);
  for (size_t i = 0; i < n; i++)
  {
    cin >> coins[i];
  }

  vector<ll> dp(x + 1); // a (size)
  for (size_t i = 0; i < dp.size(); i++)
  {
    dp[i] = INT_MAX;
  }

  dp[0] = 0;
  for (size_t i = 1; i <= coins.size(); i++)
  {
    for (size_t j = coins[i - 1]; j <= x; j++)
    {
      dp[j] = min(dp[j], dp[j - coins[i - 1]] + 1);
    }
  }

  cout << (dp[x] == INT_MAX ? -1 : dp[x]) << endl;
}