#include <iostream>

#include "Constants.h"

/// Встановити результат.
double setResult(const int &x) {
  return 3 * cos(2) * (x * Constants::pi - Constants::pi / 4);
}

/// Надрукувати результат.
void printResult() {
  double result;

  for (int x = -3; x <= 3; ++x) {
    result = setResult(x);
    
    std::cout << std::string(32, '-') << '\n'
              << "Result: " << result << '\n';
  }

  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
}

int main() {
  printPresult();
  return 0;
}