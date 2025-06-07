#include <iostream>
#define ll long 

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
      long a, b,mx,mn;
      cin >> a >> b;
      mx = max(a,b);
      mn = min(a,b);
      cout << (mx*mx) - (mn-1) << endl;
  }
}