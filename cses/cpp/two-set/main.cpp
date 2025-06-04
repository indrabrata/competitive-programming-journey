#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin >> n;

   int sum = (n * (n + 1)) / 2;

   if (sum % 2 != 0)
   {
      cout << "NO" << endl;
      return 0;
   }

   vector<int> set1;
   vector<int> set2;

   int target = sum / 2;
   for (int i = n; i > 0; i--)
   {
      if (target >= i)
      {
         set1.push_back(i);
         target -= i;
      }
      else
      {
         set2.push_back(i);
      }
   }

   cout << "YES" << endl;

   cout << set1.size() << endl;
   for (int num : set1)
   {
      cout << num << " ";
   }
   cout << endl;

   cout << set2.size() << endl;
   for (int num : set2)
   {
      cout << num << " ";
   }
   cout << endl;

   return 0;
}
