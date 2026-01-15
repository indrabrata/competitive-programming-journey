#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  int firstMissingPositive(vector<int> &nums) {
    map<int, bool> mp;

    int max = 0;
    for (int i = 0; i < nums.size(); i++) {
      mp[nums[i]] = true;
      max = max > nums[i] ? max : nums[i];
    }

    for (int i = 1; i <= max; i++) {
      if (!mp[i])
        return i;
    }

    return max + 1;
  }
};

int main() {
  Solution sol = Solution();
  vector<int> v = {1, 2, 3};
  cout << sol.firstMissingPositive(v) << endl;

  return 0;
}
