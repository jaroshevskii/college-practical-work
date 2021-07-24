#include <iostream>
#include <fstream>

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

void printValues(const char* fileName) {
  std::cout << "> Number values = ";
  uint16_t nValues = getValue();
  std::cout << '\n';

  std::ofstream fout(fileName);
  
  // Не можливо відкрити файл для запису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for writing '" << fileName << "'.\n";
    std::cout << '\n';
    return;
  }

  int16_t value;
  for (auto i = 0; i != nValues; ++i) {
    std::cout << "> Value = ";
    value = getValue();
    std::cout << '\n';

    fout << value << '\n';
  }
}

// Задати максимальне значення
uint16_t setMaxValue(const char* fileName) {
  std::ifstream fin(fileName);
  
  // Не можливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << fileName << "'.\n";
    std::cout << '\n';
    return 0;
  }

  int16_t maxValue;
  fin >> maxValue;

  uint16_t searchValue;
  while (fin >> searchValue) {
    if (searchValue > maxValue) {
      maxValue = searchValue;
    }
  }
  return maxValue;
}

void printValue(const char* fileName, int16_t& value) {
  std::ofstream fout(fileName);
  
  // Не можливо відкрити файл для запису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for writing '" << fileName << "'.\n";
    std::cout << '\n';
    return;
  }
  fout << value << '\n';
}

int main() {
  printValues("values.txt");
  
  // Задати максимальне значення
  int16_t maxValue = setMaxValue("values.txt");
  
  // Вивести значення
  printValue("max_value.txt", maxValue);
  return 0;
}