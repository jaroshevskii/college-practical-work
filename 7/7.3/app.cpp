#include <iostream>

void printVariable(const uint16_t &result) {
  std::cout << "Variable: " << result << '\n';
}

int main() {
  for (uint16_t variable = 35; variable <= 87; ++variable) {
    if (variable % 7 == 2 || variable % 7 == 5) {
      std::cout << std::string(32, '-') << '\n';

      printVariable(variable);
    }
  }
  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}