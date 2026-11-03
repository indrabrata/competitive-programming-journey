// https://atcoder.jp/contests/abc482/tasks/abc482_a

#include <iostream>
#include <ostream>
#include <string>
int main() {
  std::string nigiri;
  std::cin >> nigiri;
  int ans = 0;
  for (int i = 0; i < nigiri.length(); i++) {
    if (nigiri.at(i) == 'o') {
      ans++;
    }
  }

  std::cout << (ans % 2 == 0 ? "even" : "odd") << std::endl;
}
