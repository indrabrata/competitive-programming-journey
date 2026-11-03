// https://tlx.toki.id/problems/compfest-18-scpc-penyisihan/A
#include <cmath>
#include <iostream>
using namespace std;

long long get_gcd(long long m, long long n) {
  while (n != 0) {
    long long temp = n;
    n = m % n;
    m = temp;
  }
  return m;
}

int main() {
  long long m, n;
  if (!(cin >> m >> n))
    return 0;

  long long gcd_val = get_gcd(m, n);
  long long baseM = m / gcd_val;
  long long baseN = n / gcd_val;

  cout << (baseM * baseN * pow((gcd_val + 1), 2)) - (m * n) << endl;
  return 0;
}
