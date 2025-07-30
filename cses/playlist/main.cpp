#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  vector<long long> arr(n);
  for (long long i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  if (n == 1)
  {
    cout << 1 << endl;
    return 0;
  }

  long long low = 0, high = 1;
  long long ans = 0;

  unordered_map<long long, int> map;
  map[arr[low]] = 1;

  while (high < n)
  {
    if (map.find(arr[high]) == map.end())
    {
      map[arr[high]] = 1;
      high++;
    }
    else
    {
      map.clear();
      low = high;
      map[arr[low]] = 1;
      high = low + 1;
    }

    if (high - low > ans)
    {
      ans = high - low;
    }
  }

  cout << ans << endl;
  return 0;
}
