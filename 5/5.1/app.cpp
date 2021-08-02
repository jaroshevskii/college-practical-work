#include <iostream>

double setResult(const int16_t &a, const int16_t &b, const int16_t &c,
                 const double &x) {
  if (x < 1.0 && c != 0) {
    return a * pow(x, 2) + b / c;
  } else if (x > 1.5 && c == 0) {
    return x - a / pow(x - c, 2);
  } else if (c != 0) {
    return pow(x, 2) / pow(c, 2);
  }

  std::cout << "ERROR: Division by zero.\n";
  std::cout << '\n';
  return 0.0;
}

void printResult(const double &result) {
  std::cout << "Result: " << result << '\n';
}

int main() {
  std::cout << "// Enter the real numbers a, d and c.\n"
               "> a = ";
  int16_t a;
  std::cin >> a;

  std::cout << "> b = ";
  int16_t b;
  std::cin >> b;

  std::cout << "> c = ";
  int16_t c;
  std::cin >> c;
  std::cout << '\n';

  std::cout << "// Enter a fractional number x.\n"
               "> x = ";
  double x;
  std::cin >> x;
  std::cout << '\n';

  // Задати результат обчислення
  double result = setResult(a, b, c, x);

  printResult(result);
  std::cout << '\n';
  return 0;
}