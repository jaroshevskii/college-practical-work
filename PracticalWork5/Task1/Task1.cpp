#include <iostream>

/// Надрукувати помилку.
void printError(const std::string &text) {
  std::cerr << "error: " << text << "\n\n";
}

/// Отримати отримати ціле число.
int getInt() {
  int number;
  std::cout << "> ";
  std::cin >> number;
  return number;
}

/// Отримати число с комою.
double getDouble() {
  double number;
  std::cout << "> ";
  std::cin >> number;
  return number;
}

/// Отримати результат.
double getResult(const int &a, const int &b, const int &c, const double &x) {
  if (x < 1.0 && c != 0)
    return a * pow(x, 2) + b / c;
  if (x > 1.5 && c == 0)
    return x - a / pow(x - c, 2);
  if (c != 0)
    return pow(x, 2) / pow(c, 2);

  printError("Division by zero.");
  return 0.0;
}

/// Надрукувати результат.
void printResult(const double &result) {
  std::cout << "Result: " << result << "\n\n";
}

int main() {
  std::cout << "Enter the integer numbers: a, b and c.\n";
  const int a = getInt();
  const int b = getInt();
  const int c = getInt();
  std::cout << '\n';

  std::cout << "Enter the decimal number: x.\n";
  const double x = getDouble();
  std::cout << '\n';

  const double result = getResult(a, b, c, x);
  printResult(result);
  return 0;
}
