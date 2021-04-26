#include <iostream>
#include <fstream>

void fileWriteValue(const char* file) {
  std::ofstream fout(file);
  
  // Якщо не можливо відкрити файл для запису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for writing '" << file << "'\n";
    return;
  }
  
  std::cout << "// Use '0' to end writing to file\n";
  std::cout << '\n';
  
  while (true) {
    std::cout << "> ";
    int value;
    std::cin >> value;
    
    // Якщо введена команда '0' закінчення запису
    if (value == 0) {
      std::cout << '\n';
      return;
    }
    
    // Запис значення в файл
    fout << value << '\n';
  }
}

int fileSearchMaxValue(const char* file) {
  std::ifstream fin(file);
  
  // Якщо не можливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << file << "'\n";
    return 0;
  }
  
  int maxValue = 0;
  while (fin) {
    int value;
    fin >> value;
    
    if (value > maxValue) {
      maxValue = value;
    }
  }
  return maxValue;
}

void fileWriteMaxValue(const char* readFile, const char* writeFile) {
  int maxValue = fileSearchMaxValue(readFile);

  // Якщо максимальне значення невідоме
  if (maxValue == 0) {
    std::cout << "ERROR: Maximum value not known\n";
    return;
  }

  std::ofstream fout(writeFile);

  // Якщо не можливо відкрити файл для зпису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for writing '" << writeFile << "'\n";
    return;
  }

  // Запис максимального значення в файл
  fout << maxValue << '\n';
}

int main() {
  // Запис значень в файл
  fileWriteValue("28.3/temp.txt");

  // Запис максимального начення в файл
  fileWriteMaxValue("28.3/temp.txt", "28.3/max_value.txt");
  return 0;
}
