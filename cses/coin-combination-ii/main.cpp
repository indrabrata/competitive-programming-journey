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
  dp[0] = 0;
  long long temp = LONG_MAX;
  for (int i = 1; i <= x; i++)
  {
    for (int j = 0; j < arr.size(); j++)
    {
      if (i - arr[j] >= 0)
      {
        temp = min(dp[i - arr[j]] + 1, temp);
      }
    }
    dp[i] = temp;
    dp[i] %= 1000000007;
  }
  cout << dp[x];
  return 0;
}