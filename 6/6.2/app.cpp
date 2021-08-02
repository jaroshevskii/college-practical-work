#include <iostream>

uint16_t getFunctionNumber() {
  uint16_t functionNumber;
  while (true) {
    std::cin >> functionNumber;
    if (functionNumber >= 1 && functionNumber <= 3) {
      return functionNumber;
    }
    std::cout << '\n';
    
    std::cout << "ERROR: The function number is incorrect.\n";
    std::cout << '\n';

    std::cout << "> ";
  }
}

double setResult(const uint16_t &functionNumber, const double &x) {
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

void printResult(const double &result) {
  std::cout << "Result: " << result << '\n';
}

int main() {
  std::cout << "// Enter a fractional number x.\n";
               "> x = ";
  double x;
  std::cin >> x;
  std::cout << '\n';

  std::cout << "// Enter the function number.\n"
               "> ";
  uint16_t functionNumber = getFunctionNumber();
  std::cout << '\n';
  
  // Задати результат обчислення
  double result = setResult(functionNumber, x);
  
  printResult(result);
  std::cout << '\n';
  return 0;
}