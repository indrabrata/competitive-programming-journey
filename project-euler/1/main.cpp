#include <iostream>

int main() {
  long long ans = 0;

  for (long long i = 1; i < 1000; i += 1) {
    if (i % 3 == 0) {
      ans += i;
    } else if (i % 5 == 0) {
      ans += i;
    }
  }

  std::cout << ans << std::endl;

  return 0;
}
