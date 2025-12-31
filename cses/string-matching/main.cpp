#include <bits/stdc++.h>

using namespace std;

int main()
{
  string a, x;
  cin >> a >> x;

  if (a.length() < x.length())
  {
    cout << 0;
    return 0;
  }

  int ans = 0;
  for (size_t i = 0; i <= a.length() - x.length(); i++)
  {
    if (a.substr(i, x.length()) == x)
    {
      ans++;
    }
  }

  cout << ans;
}