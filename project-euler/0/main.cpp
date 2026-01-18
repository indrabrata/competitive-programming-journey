#include <iostream>

int main() {
  long long ans = 0;
  for (long long i = 1; i <= 904000; i += 2) {
    ans += (i * i);
  }

  std::cout << ans << std::endl;

  return 0;
}
