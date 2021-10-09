#include <iostream>

#include "Get.h"

/// Отримати номер функції.
void getFunctionNumber(int &functionNumber) {
  while (true) {
    getInt(functionNumber);

    if (functionNumber >= 1 && functionNumber <= 3)
      return;
    
    std::cout << '\n';
    std::cout << "error: The function number is incorrect.\n";
    std::cout << '\n';

    std::cout << "> ";
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
  std::cout << "Result: " << result << "\n";
  std::cout << '\n';
}

int main() {
  std::cout << "// Enter the function number:\n"
               "  1. -2 * pow(x, 2) - 4\n"
               "  2. 5 * x + 2\n"
               "  3. 15 - 3 * x\n";
  std::cout << '\n';

  std::cout << "> ";
  int functionNumber;
  getFunctionNumber(functionNumber);
  std::cout << '\n';

  std::cout << "// Enter the decimal number: x.\n"
               "> x = ";
  double x;
  getDouble(x);
  std::cout << '\n';
  
  const double result = setResult(functionNumber, x);
  
  printResult(result);
  return 0;
}