#include <iostream>

using namespace std;

int main()
{
  int arr[6][5] = {
      {0, 1, 1, 0, 1},
      {1, 1, 0, 1, 0},
      {0, 1, 1, 1, 0},
      {1, 1, 1, 1, 0},
      {1, 1, 1, 1, 1},
      {0, 0, 0, 0, 0}};

  int result = 0;
  for (size_t i = 0; i < sizeof(arr); i++)
  {
    int temp1 = 0;
    for (size_t j = 0; j < sizeof(arr[j]); j++)
    {
      int temp2 = 0;
      int res = solve(i, j, arr);

      if (res > temp2)
      {
        temp2 = res;
      }

      if (temp2 > temp1)
      {
        temp1 = temp2;
      }
    }

    if (temp1 > result)
    {
      result = temp1;
    }
  }

  cout << result;
}

int solve(int start, int end, int arr[6][5])
{
  int resul = 0;
  
  
}