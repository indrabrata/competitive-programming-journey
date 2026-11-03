// https://open.kattis.com/problems/monopol
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<double> hotelDistances(n);

  for (int i = 0; i < n; i++) {
    cin >> hotelDistances[i];
  }

  double diceCombination = 36.0;
  double prob = 0;
  for (auto hotelDistance : hotelDistances) {
    double combination = 0;
    for (int i = 6; i > 0; i--) {
      int temp = hotelDistance - i;
      if (temp <= 6 && temp >= 1) {
        combination += 1;
      }
    }
    prob += (double)combination / diceCombination;
  }

  cout << prob << endl;
}
