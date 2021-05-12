#include <iostream>

// Отримання значення
int getValue(const int minValue, const int maxValue) {
  int value;

  while (true) {
    std::cin >> value;

    if (value >= minValue && value <= maxValue) {
      return value;
    } else {
      std::cout << "ERROR: Entered value is not true\n"
                   "> ";
    }
  }
}

int main() {
  std::cout << "> yearsOfDragon = ";
  int yearsOfDragon = getValue(1, 99999);
  std::cout << '\n';

  const int maxYears = 100;  // Максимальна кількість років для росту 3 голів

  int dragonHeads = 0;  // Кількість голів дракона

  if (yearsOfDragon > maxYears) {
    dragonHeads = (yearsOfDragon - maxYears) * 2 + 3 * maxYears;
  } else {
    dragonHeads = yearsOfDragon * 3;
  }
  
  // Знаходження кількості очей дракона
  int dragonEyes = dragonHeads * 2;

  std::cout << "Dragon heads: " << dragonHeads << "\n"
            << "Dragon eyes: " << dragonEyes << '\n';
  std::cout << '\n';
  return 0;
}