#include <iostream>
/*
void app_info() {
  std::cout << " App version \t[0.1]\n"
               " Developer   \t[Jaroshevskii]\n";
  std::cout << '\n';
}

template <class T>
T input_value() {
  double value;
  std::cin >> value;
  return value;
}

int input_value(const int min_value, const int maxValue) {
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

double searchPerimeter(double a) { return a * 4; }

double searchPerimeter(double a, double b) { return (a + b) * 2; }

double searchPerimeter(double a, double b, double c) { return a + b + c; }

void appLogic(int select) {
  double perimeter;
  if (select == 1) {
    std::cout << "// a - side of a square\n";
    std::cout << '\n';

    std::cout << "Enter: a = ";
    double a = inputValue();

    perimeter = searchPerimeter(a);
  } else if (select == 2 || select == 4) {
    if (select == 2) {
      std::cout << "// a, b - adjacent sides of the rectangle\n";
    } else if (select == 4) {
      std::cout << "// a, b - adjacent sides of the parallelogram\n";
    }
    std::cout << '\n';

    std::cout << "Enter: a = ";
    double a = inputValue();
    std::cout << "Enter: b = ";
    double b = inputValue();

    perimeter = searchPerimeter(a, b);
  } else if (select == 3) {
    std::cout << "// a, b, c - adjacent sides of the triangle\n";
    std::cout << '\n';

    std::cout << "Enter: a = ";
    double a = inputValue();
    std::cout << "Enter: b = ";
    double b = inputValue();
    std::cout << "Enter: c = ";
    double c = inputValue();

    perimeter = searchPerimeter(a, b, c);
  }
  std::cout << '\n';

  std::cout << "Perimeter = " << perimeter << '\n';
  std::cout << '\n';
}

auto foo(auto x) {}
*/

template <class T>
auto get(T& x) {
  std::cin >> x;
  return x;
}

int main() {
  int a;
  get(a);
  std::cout << a << '\n';
  std::cout << '\n';

  










  return 0;






  std::cout << "// Finding the perimeter of a square, rectangle, triangle or\n"
               "// parallelogram\n";
  std::cout << '\n';

  while (true) {
    std::cout << "// MAIN MENU\n"
                 " 1 - Square\n"
                 " 2 - Rectangle\n"
                 " 3 - Triangle\n"
                 " 4 - Parallelogram\n"
                 " 5 - App info\n"
                 " 6 - Exit\n";
    std::cout << '\n';

    /*int choise = inputValue(1, 6);
    if (choise >= 1 && choise <= 4) {
      appLogic(choise);
    } else if (choise == 5) {
      appInfo();
    } else if (choise == 6) {
      std::cout << "// END\n";
      return 0;
    }*/
  }
}