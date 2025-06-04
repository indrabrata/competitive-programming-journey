#include <iostream>

using namespace std;

int main(){
  int n,m;

  cin >> n >> m;

  bool res = true;

  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < m; j++)
    {
      char c;
      cin >> c;
      if (c == 'C' || c == 'M' || c == 'Y')
      {
        cout << "#Color";
        return 0;
      }
      
    }    
  }

  cout << "#Black&White";

  return 0;
}