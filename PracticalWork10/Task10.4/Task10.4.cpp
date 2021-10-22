#include <iostream>

/// Отримати кількість чисел.
int getNumberOfNumbers(const int *array, const int &arrayLenght,
                       const int &value) {
  int counterOfNumbers = 0;

  for (int i = 0; i < arrayLenght; ++i) {
    if (array[i] > value && array[i] % 2 == 0)
      ++counterOfNumbers;
  }

  return counterOfNumbers;
}

/// Надрукувати кількість чисел.
void printNumberOfNumbers(const int &numberOfNumbers) {
  std::cout << "Number of numbers: " << numberOfNumbers << '\n';
  std::cout << '\n';
}

int main() {
  const int arrayLenght = 16;
  int array[arrayLenght];

  std::cout << "// Enter " << arrayLenght << " integers.\n";

  for (int i = 0; i < arrayLenght; ++i) {
    std::cout << "> ";
    std::cin >> array[i];
  }
  std::cout << '\n';

  std::cout << "// Enter the integer.\n"
               "> ";
  int value;
  std::cin >> value;
  std::cout << '\n';

  const int numberOfNumbers = getNumberOfNumbers(array, arrayLenght, value);

  printNumberOfNumbers(numberOfNumbers);
  return 0;
}