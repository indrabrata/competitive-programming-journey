#include <bits/stdc++.h>
using namespace std;

int main()
{
  string target;
  int n;
  cin >> target >> n;

  vector<string> word(n);
  for (size_t i = 0; i < n; i++)
  {
    cin >> word[i];
  }

  cout << target << n << endl;
}