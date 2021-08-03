#include <iostream>

int main() {
  uint16_t result;
  for (uint16_t i = 1; i != 10; ++i) {
    for (uint16_t j = 1; j != 10; ++j) {
      result = i * j;
      if (result < 10) {
        std::cout << ' ' << result << ' ';
      } else {
        std::cout << result << ' ';
      }
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  return 0;
}