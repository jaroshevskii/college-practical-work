#include <iostream>

int main() {
  const uint16_t row = 4;
  const uint16_t column = 9;
  const char symbol = 'j';

  for (uint16_t i = 0; i != row; ++i) {
    for (uint16_t j = 0; j != column; ++j) {
      std::cout << symbol;
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  return 0;
}