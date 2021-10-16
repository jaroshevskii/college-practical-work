#include <iostream>

int main() {
  int result;

  for (int i = 1; i <= 9; ++i) {
    for (int j = 1; j <= 9; ++j) {
      result = i * j;

      if (result < 10)
        std::cout << ' ';

      std::cout << result << ' ';
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  return 0;
}