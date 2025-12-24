#include <bits/stdc++.h>
#define ll long long

int main()
{
  int n;
  std::cin >> n;

  std::vector<std::vector<ll>> tc(n);

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    tc[i].resize(x);
    for (int y = 0; y < x; y++)
    {
      std::cin >> tc[i][y];
    }
  }

  for (size_t i = 0; i < tc.size(); i++)
  {
    if (tc[i].size() < 3)
      continue;

    int idxRemove = -1;
    int holder = INT_MIN;
    for (size_t j = 0; j + 2 < tc[i].size(); j++)
    {
      if (std::abs(tc[i][j] - tc[i][j + 1]) > std::abs(tc[i][j] - tc[i][j + 2]) && std::abs(tc[i][j] - tc[i][j + 1]) > holder)
      {
        holder = std::abs(tc[i][j] - tc[i][j + 1]);
        if (tc[i][j] > tc[i][j + 1])
        {
          idxRemove = j;
        }
        else
        {
          idxRemove = j + 1;
        }
      }
      else if (std::abs(tc[i][j] - tc[i][j + 1]) < std::abs(tc[i][j] - tc[i][j + 2]) && std::abs(tc[i][j] - tc[i][j + 2]) > holder)
      {
        holder = std::abs(tc[i][j] - tc[i][j + 2]);
        if (tc[i][j] > tc[i][j + 2])
        {
          idxRemove = j;
        }
        else
        {
          idxRemove = j + 2;
        }
      }
    }

    if (idxRemove >= 0 && idxRemove < (int)tc[i].size())
    {
      tc[i].erase(tc[i].begin() + idxRemove);
    }
  }

  for (size_t i = 0; i < tc.size(); i++)
  {
    ll ans = 0;
    for (size_t j = 1; j < tc[i].size(); j++)
    {
      ans += std::llabs(tc[i][j] - tc[i][j - 1]);
    }
    std::cout << ans << '\n';
  }

  return 0;
}
