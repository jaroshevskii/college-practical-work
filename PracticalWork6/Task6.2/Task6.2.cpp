#include <iostream>

/// Отримати номер функції.
int getFunctionNumber() {
  std::cout << "// Enter the function number:\n"
               "  1. -2.0 * pow(x, 2.0) - 4.0\n"
               "  2. 5.0 * x + 2.0\n"
               "  3. 15.0 - 3.0 * x\n";
  std::cout << '\n';

  std::cout << "> ";
  int functionNumber;

  while (true) {
    std::cin >> functionNumber;
    std::cout << '\n';

    if (functionNumber >= 1 && functionNumber <= 3)
      return functionNumber;
    
    std::cout << "error: The function number is incorrect.\n";
    std::cout << '\n';

    std::cout << "// Repeat again.\n"
                 "> ";
  }
}

/// Вствновити результат.
double setResult(const int &functionNumber, const double &x) {
  switch (functionNumber) {
  case 1:
    return -2 * pow(x, 2) - 4;
  case 2:
    return 5 * x + 2;
  case 3:
    return 15 - 3 * x;
  default:
    return 0.0;
  }
}

/// Надрукувати результат.
void printResult(const double &result) {
  std::cout << "Result: " << result << '\n';
  std::cout << '\n';
}

int main() {
  const int functionNumber = getFunctionNumber();

  std::cout << "// Enter the decimal number: x.\n"
               "> x = ";
  double x;
  std::cin >> x;
  std::cout << '\n';
  
  const double result = setResult(functionNumber, x);
  
  printResult(result);
  return 0;
}