#include <iostream>

/// Встановити результат.
double setResult(const double &pi, const int &x) {
  return 3 * cos(2) * (x * pi - pi / 4);
}

int main() {
  const double pi = 3.14159265359;

  double result;
  for (int x = -3; x <= 3; ++x) {
    std::cout << std::string(32, '-') << '\n';

    result = setResult(pi, x);

    std::cout << "Result: " << result << '\n';
  }
  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}