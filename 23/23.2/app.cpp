#include <iostream>


double inputValue() {
  double value;
  std::cin >> value;
  return value;
}

int inputValue(const int minValue, const int maxValue) {
  while (true) {
    std::cout << "Enter: ";
    int value;
    std::cin >> value;
    std::cout << '\n';

    if (value >= minValue && value <= maxValue) {
      return value;
    } else {
      std::cout << "// ERROR: Entered value is not corrcect\n";
      std::cout << '\n';
    }
  }
}

void searchEquation(double* a, double* b) {
  double x = -(*b) / *a;
  std::cout << "x = " << x << '\n';
  std::cout << '\n';
}

void searchEquation(double* a, double* b, double* c) {
  double discriminant = pow(*b, 2) - 4 * *a * *c;

  double x1 = (-(*b) - sqrt(discriminant)) / (2 * *a);
  std::cout << "x1 = " << x1 << '\n';
  double x2 = (-(*b) + sqrt(discriminant)) / (2 * *a);
  std::cout << "x2 = " << x2 << '\n';
  std::cout << '\n';
}

void appLogic(int select) {
  if (select == 1) {
    std::cout << "// ax + b = 0\n"
                 "// a, b - some numbers\n";
    std::cout << '\n';

    std::cout << "Enter: a = ";
    double a = inputValue();
    std::cout << "Enter: b = ";
    double b = inputValue();
    std::cout << '\n';

    searchEquation(&a, &b);
  } else if (select == 2) {
    std::cout << "// ax2 + bx + c = 0\n"
                 "// a, b, c - some numbers\n";
    std::cout << '\n';

    std::cout << "Enter: a = ";
    double a = inputValue();
    std::cout << "Enter: b = ";
    double b = inputValue();
    std::cout << "Enter: c = ";
    double c = inputValue();
    std::cout << '\n';

    searchEquation(&a, &b, &c);
  }
}

int main() {
  std::cout << "// Search for quadratic and linear equations\n";
  std::cout << '\n';

  while (true) {
    std::cout << "// MAIN MENU\n"
                 " 1 - Linear\n"
                 " 2 - Quadratic\n"
                 " 3 - App info\n"
                 " 4 - Exit\n";
    std::cout << '\n';

    int choise = inputValue(1, 4);
    if (choise == 1 || choise == 2) {
      appLogic(choise);
    } else if (choise == 3) {
      
    } else if (choise == 4) {
      std::cout << "// END\n";
      return 0;
    }
  }
}