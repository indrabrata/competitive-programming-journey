#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  int n;
  string str;
  cin >> n;
  cin >> str;

  map<string, int> maps;

  for (size_t i = 0; i < str.length() - 1; i++)
  {
    string substr = str.substr(i, 2);
    if (maps.count(substr) > 0)
    {
      maps.at(substr)++;
    }
    else
    {
      maps.insert({substr, 1});
    }
  }

  string ans = "";
  int totalCount = 0;
  for (auto e : maps)
  {
    if (e.second > totalCount)
    {
      ans = e.first;
      totalCount = e.second;
    }
  }

  cout << ans;
}
