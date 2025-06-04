#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (){
  int k;
  int n;

  cin >> n >> k;
  vector<int> nums(n);

  for (size_t i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  int temp = nums[k - 1];
  int result = 0;

  for (int i = 0; i < n; i++)
  {
    if (nums[i] >= temp && nums[i] > 0)
    {
      result++;
    }
  }
  cout << result;
}