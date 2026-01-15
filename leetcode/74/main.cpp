#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  bool searchMatrixLinearSearch(vector<vector<int>> &matrix, int target) {
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[i].size(); j++) {
        if (matrix[i][j] == target) {
          return true;
        }
      }
    }
    return false;
  }

public:
  bool searchMatrixBinarySearch(vector<vector<int>> &matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int searchRow = 0;
    int searchCol = col - 1;

    while (searchRow < row && col > -1) {
      if (matrix[searchRow][searchCol] == target) {
        return true;
      }

      if (matrix[searchRow][searchCol] < target) {
        searchRow++;
      } else {
        searchCol--;
      }
    }

    return false;
  }
};

int main() {
  Solution sol;

  vector<vector<int>> matrix = {
      {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

  int target = 3;

  bool result = sol.searchMatrixBinarySearch(matrix, target);

  cout << result;

  return 0;
}
