#include <iostream>

#include "Get.h"

/// Задати результат.
double setResult(const int &a, const int &b, const int &c,
                 const double &x) {
  if (x < 1.0 && c != 0)
    return a * pow(x, 2) + b / c;
  if (x > 1.5 && c == 0)
    return x - a / pow(x - c, 2);
  if (c != 0)
    return pow(x, 2) / pow(c, 2);

  std::cout << "error: Division by zero.\n";
  std::cout << '\n';
  return 0.0;
}

/// Вивести результат.
void printResult(const double &result) {
  std::cout << "Result: " << result << '\n';
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter the integers: a, b, and c.\n"
               "> a = ";
  int a;
  getInt(a);

  std::cout << "> b = ";
  int b;
  getInt(b);

  std::cout << "> c = ";
  int c;
  getInt(c);
  std::cout << '\n';

  std::cout << "// Enter the decimal number: x.\n"
               "> x = ";
  double x;
  getDouble(x);
  std::cout << '\n';

  const double result = setResult(a, b, c, x);

  printResult(result);
  return 0;
}
