#include <iostream>

struct Dragon {
  uint16_t nYears;  // Кількість років
  uint16_t nHeads;  // Кількість голів
  uint16_t nEyes;   // Кількість очей
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

uint16_t setDragonHeards(const uint16_t nYears) {
  const uint8_t max = 99;  // Максимальна кількість років для росту 3 голів

  if (nYears > max) {
    return max * 3 + (nYears - max) * 2;
  }
  return nYears * 3;
}

uint16_t setDragonEyes(const uint16_t nHeads) { return nHeads * 2; }

void printDragon(const Dragon &dragon) {
  std::cout << "Years: " << dragon.nYears << '\n'
            << "Heads: " << dragon.nHeads << '\n'
            << "Eyes: " << dragon.nEyes << '\n';
  std::cout << '\n';
}

int main() {
  Dragon dragon{};

  std::cout << "How old is the dragon?\n"
               "> ";
  dragon.nYears = getValue();
  std::cout << '\n';

  // Встановити кількість голів дракона
  dragon.nHeads = setDragonHeards(dragon.nYears);

  // Встановити кількість очей дракона
  dragon.nEyes = setDragonEyes(dragon.nHeads);

  printDragon(dragon);
  return 0;
}