#include <iostream>

template <class T>
T leastValueOfArray(const T* array, const uint16_t& size) {
  T leastValue = array[0];
  for (uint16_t i = 1; i < size; ++i) {
    if (leastValue > array[i]) {
      leastValue = array[i];
    }
  }
  return leastValue;
}

int main() {
  uint16_t array[]{1, 3, 2, 4, 5};
  std::cout << leastValueOfArray(array, 5) << '\n';
  return 0;
}