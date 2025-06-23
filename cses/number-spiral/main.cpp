#include <iostream>
#define ll long long int

using namespace std;

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll a, b, mx, mn;
    cin >> a >> b;
    mx = max(a, b);
    mn = min(a, b);
    cout << (mx * mx) - (mn - 1) << endl;
  }
}