#include <iostream>

#include "Constants.h"

/// Змінні.
struct Variables {
  double a;
  double b;

  double xStart;
  double xFinish;
  double xStep;
};

/// Отримати номер функції.
int getFunctionNumber() {
  std::cout << "// Enter the function number:\n"
               "   1. (a + tan(pow(x, 2.0))) / (b + 0.7 * x)\n"
               "   2. sqrt(a * x + b) / (log(x) + 3.5)\n"
               "   3. (1.0 + sin(pow(b, 2) + pow(x, 2.0))) / (a + sqrt(x + 2.5))\n"
               "   4. (pow(e, a * x) + b) / (1.0 + pow(cos(x), 2.0))\n"
               "   5. log(pow(a, 2.0) - x) / (b + sin(pow(x, 2.0)))\n"
               "   6. (pow(e, x) + pow(e, a)) / (b + sin(pow(x, 2.0)))\n"
               "   7. (a + pow(sin(x), 2.0)) / (cos(x) + pow(b, 2.0))\n"
               "   8. (1.0 + pow(tan(x + a), 2.0)) / (b + pow(e, x))\n"
               "   9. (a * sqrt(x) + pow(tan(x + a), 2.0)) / (log(x) + a)\n"
               "  10. (b + pow(sin(x), 2.0)) / (a + pow(e, x))\n"
               "  11. (pow(sin(x), 2.0) - a) / (b + pow(x, 2.0))\n"
               "  12. (a + pow(log(x), 2.0)) / (b + sqrt(x))\n"
               "  13. (pow(a, 2.0) + sin(b + x)) / (1.8 + pow(cos(a + x), 2.0))\n"
               "  14. log(abs(x - b)) / (a + pow(x, 1.0 / 3.0))\n"
               "  15. (a - sqrt(b * x)) / (1.0 + cos(pow(x, 2.0)))\n";
  std::cout << '\n';

  std::cout << "> ";
  int functionNumber;

  while (true) {
    std::cin >> functionNumber;
    std::cout << '\n';

    if (functionNumber >= 1 && functionNumber <= 15)
      return functionNumber;

    std::cout << "error: The function number is incorrect.\n";
    std::cout << '\n';

    std::cout << "// Repeat again.\n"
                 "> ";
  }
}

/// Встановити змінні.
Variables setVariables(const int &functionNumber) {
  switch (functionNumber) {
  case 1:
    return {0.4, 2.3, 6.5, 10.0, 0.5};
  case 2:
    return {1.4, 0.98, 7.5, 10.0, 0.5};
  case 3:
    return {4.3, 2.5, 5.3, 7.0, 0.1};
  case 4:
    return {1.85, 0.9, 1.0, 2.0, 0.1};
  case 5:
    return {3.2, 0.45, 0.6, 2.0, 0.2};
  case 6:
    return {2.0, 1.6, 0.6, 2.0, 0.2};
  case 7:
    return {0.6, 1.24, 10.2, 12.0, 0.2};
  case 8:
    return {4.1, 0.96, 1.25, 3.0, 0.25};
  case 9:
    return {0.45, 2.8, 4.0, 6.0, 0.2};
  case 10:
    return {1.6, 1.25, 0.2, 2.0, 0.2};
  case 11:
    return {1.8, 0.34, 6.0, 8.0, 0.1};
  case 12:
    return {1.38, -1.26, 6.0, 15.0, 1.0};
  case 13:
    return {0.25, 0.68, 1.1, 3.0, 0.1};
  case 14:
    return {5.5, 0.36, 1.0, 8.0, 0.5};
  case 15:
    return {17.6, 10.45, 1.9, 3.5, 0.1};
  default:
    return {};
  }
}

/// Надрукувати змінні.
void printVariables(const Variables &variables) {
  std::cout << "// Variables\n"
            << "  a: " << variables.a << '\n'
            << "  b: " << variables.b << '\n'
            << "  x(start): " << variables.xStart << '\n'
            << "  x(finish): " << variables.xFinish << '\n'
            << "  x(step): " << variables.xStep << '\n';
  std::cout << '\n';
}

/// Встановити результат.
double setResult(const int &functionNumber, const double &a, const double &b,
                 const double x) {
  switch (functionNumber) {
  case 1:
    return (a + tan(pow(x, 2.0))) / (b + 0.7 * x);
  case 2:
    return sqrt(a * x + b) / (log(x) + 3.5);
  case 3:
    return (1.0 + sin(pow(b, 2) + pow(x, 2))) / (a + sqrt(x + 2.5));
  case 4:
    return (pow(Constants::e, a * x) + b) / (1.0 + pow(cos(x), 2.0));
  case 5:
    return log(pow(a, 2.0) - x) / (b + sin(pow(x, 2.0)));
  case 6:
    return (pow(Constants::e, x) + pow(Constants::e, a)) / (b + sin(pow(x, 2.0)));
  case 7:
    return (a + pow(sin(x), 2.0)) / (cos(x) + pow(b, 2.0));
  case 8:
    return (1 + pow(tan(x + a), 2.0)) / (b + pow(Constants::e, x));
  case 9:
    return (a * sqrt(x) + pow(tan(x + a), 2.0)) / (log(x) + a);
  case 10:
    return (b + pow(sin(x), 2.0)) / (a + pow(Constants::e, x));
  case 11:
    return (pow(sin(x), 2.0) - a) / (b + pow(x, 2.0));
  case 12:
    return (a + pow(log(x), 2.0)) / (b + sqrt(x));
  case 13:
    return (pow(a, 2.0) + sin(b + x)) / (1.8 + pow(cos(a + x), 2.0));
  case 14:
    return log(abs(x - b)) / (a + pow(x, 1.0 / 3.0));
  case 15:
    return (a - sqrt(b * x)) / (1.0 + cos(pow(x, 2.0)));
  default:
    return 0.0;
  }
}

// Надрукувати результат.
void printResult(const int functionNumber, const Variables &variables) {
  double result;

  for (double x = variables.xStart; x <= variables.xFinish;
       x += variables.xStep) {
    result = setResult(functionNumber, variables.a, variables.b, x);

    std::cout << std::string(32, '-') << '\n'
              << "x: " << x << '\n'
              << "Result: " << result << '\n';
  }

  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
}

int main() {
  const int functionNumber = getFunctionNumber();

  const Variables variables = setVariables(functionNumber);

  printVariables(variables);

  printResult(functionNumber, variables);
  return 0;
}