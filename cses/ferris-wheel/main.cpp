#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;

  vector<int> vec(n);
  int totalWeight = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }

  sort(vec.begin(), vec.end());

  int start = 0;
  int end = vec.size() - 1;

  int ans = 0;
  while (start < end)
  {
    if (vec[end] < x)
    {
      int temp = vec[end] + vec[start];
      if (temp > x)
      {
        end--;
        ans++;
      }
      else
      {
        start++;
        end++;
        ans++;
      }
    }
  }

  cout << ans;
}
