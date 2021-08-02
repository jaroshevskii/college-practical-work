#include <iostream>

double setResult(const double &pi, const uint16_t &x) {
  return 3 * cos(2) * (x * pi - pi / 4);
}

void printResult(const double &result) {
  std::cout << "Result: " << result << '\n';
}

int main() {
  const double pi = 3.14159265359;
  
  double result;
  for (int16_t x = -3; x <= 3; ++x) {
    // Задати результат обчислення
    result = setResult(pi, x);
    
    std::cout << std::string(32, '-') << '\n';

    printResult(result);
  }

  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}