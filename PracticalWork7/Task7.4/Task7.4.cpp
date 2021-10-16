#include <iostream>

/// Отримати число.
void getNumber(int &number) {
  while (true) {
    std::cin >> number;

    if (number > 0)
      return;

    std::cout << '\n';
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
  std::cout << "// Enter the decimal number: a.\n"
               "> a = ";
  double a;
  std::cin >> a;
  std::cout << '\n';

  std::cout << "// Enter the integer: n.\n"
               "> n = ";
  int n;
  getNumber(n);
  std::cout << '\n';

  double result = setResult(a, n);

  printResult(result);
  return 0;
}