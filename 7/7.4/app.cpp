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

double setResult(const double &a, const uint16_t &n) {
  double result = 1.0;
  bool isSwitch = false;

  for (uint16_t i = 1; i <= n; ++i) {
    if (isSwitch) {
      result += pow(a, i);
      isSwitch = false;
    } else {
      result -= pow(a, i);
      isSwitch = true;
    }
  }

  if (isSwitch) {
    return result + pow(-1, n) * pow(a, n);
  } else {
    return result - pow(-1, n) * pow(a, n);
  }
}

void printResult(const double &result) {
  std::cout << "Result: " << result << '\n';
}

int main() {
  std::cout << "// Enter a fractional number a.\n"
               "> a = ";
  double a;
  std::cin >> a;
  std::cout << '\n';

  std::cout << "// Enter the real numbers n.\n"
               "> n = ";
  uint16_t n = getValue(1);
  std::cout << '\n';

  // Задати результат обчислення.
  double result = setResult(a, n);

  printResult(result);
  std::cout << '\n';
  return 0;
}