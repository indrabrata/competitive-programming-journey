#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  string countAndSay(int n) {
    string ans = "";
    for (int i = 0; i < n; i++) {
      string temp = "";
      if (ans == "") {
        temp = "1";
      } else if (ans == "1") {
        temp = "11";
      } else {
        int counter = 1;
        string ch = ans.substr(0, 1);
        for (int j = 0; j < ans.length() - 1; j++) {

          if (ch == ans.substr(j + 1, 1)) {
            counter++;
          } else {
            temp += to_string(counter) + ch;
            counter = 1;
            ch = ans.substr(j + 1, 1);
          }
        }

        temp += to_string(counter) + ch;
      }
      ans = temp;
    }
    return ans;
  }
};

int main() {
  Solution sol = Solution();
  cout << sol.countAndSay(5);
  return 0;
}
