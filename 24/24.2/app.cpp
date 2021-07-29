#include <iostream>

template <class T>
T setAverageValue(const T* array, const uint16_t& lenght) {
  T sum = 0.0;
  for (auto i = 0; i != lenght; ++i) {
    sum += i;
  }
  return sum / lenght;
}

int main() {
  uint16_t array[]{1, 3, 2, 4, 5};
  std::cout << setAverageValue(array, 5) << '\n';
  return 0;
}