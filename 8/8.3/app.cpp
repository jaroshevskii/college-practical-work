#include <iostream>

uint16_t getValue(const uint16_t &min) {
  uint16_t value;
  while (true) {
    std::cin >> value;
    if (value >= 1) {
      return value;
    }
    std::cout << '\n';

    std::cout << "ERROR: The vale is incorrect.\n";
    std::cout << '\n';

    std::cout << "> ";
  }
}

int main() {
  std::cout << "// Enter the real numbers row and column.\n"
               "> row = ";
  uint16_t row = getValue(1);

  std::cout << "> column = ";
  uint16_t column = getValue(1);
  std::cout << '\n';
  
  std::cout << "// Enter the symbol.\n"
               "> row = ";
  char symbol;
  std::cin >> symbol;
  std::cout << '\n';

  for (uint16_t i = 0; i < row; ++i) {
    for (uint16_t j = 0; j < column; ++j) {
      if (i == 0 || j == 0 || i == row - 1 || j == column - 1) {
        std::cout << symbol;
      } else {
        std::cout << ' ';
      }
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  return 0;
}