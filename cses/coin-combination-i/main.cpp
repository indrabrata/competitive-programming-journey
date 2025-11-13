#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<long long> dp(x + 1);
  dp[0] = 1;
  for (int i = 1; i <= x; i++)
  {
    dp[i] = 0;
    for (int j = 0; j < arr.size(); j++)
    {
      dp[i] += i - arr[j] < 0 ? 0 : dp[i - arr[j]];
    }
    dp[i] %= 1000000007;
  }
  cout << dp[x];
  return 0;
}