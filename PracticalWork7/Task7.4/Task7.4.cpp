#include <iostream>

/// Отримати ціле число.
int getInt(const int &minValue) {
  int value;

  while (true) {
    std::cin >> value;
    std::cout << '\n';

    if (value >= minValue)
      return value;

    std::cout << "error: The number is incorrect.\n";
    std::cout << '\n';

    std::cout << "// Repeat again.\n"
              << "> ";
    std::cout << '\n';
  }
}

/// Встановити результат.
double setResult(const double &a, const int &n) {
  double result = 1.0;

  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 0 )
      result += pow(a, i);
    else
      result -= pow(a, i);
  }

  if (n % 2 == 0)
    result += pow(-1, n);
  else
    result -= pow(-1, n);
  
  return result * pow(a, n);
}

/// Надрукувати результат.
void printResult(const double &result) {
  std::cout << "Result: " << result << '\n';
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter the decimal number.\n"
               "> ";
  double a;
  std::cin >> a;
  std::cout << '\n';

  std::cout << "// Enter the integer.\n"
               "> ";
  int n = getInt(1);

  const double result = setResult(a, n);

  printResult(result);
  return 0;
}