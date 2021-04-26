#include <iostream>
#include <fstream>

void fileWrite(const char* file) {
  std::ofstream fout(file);
  
  // Якщо не можливо відкрити файл для запису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for writing '" << file << "'\n";
    return;
  }
  
  std::cout << "// Use 'end' to end writing to file\n";
  std::cout << '\n';
  
  while (true) {
    std::cout << "> ";
    std::string str;
    std::getline(std::cin, str);
    
    // Якщо введена команда 'end' закінчення запису
    if (str == "end") {
      std::cout << '\n';
      return;
    }
    
    // Запис рядка в файл
    fout << str << '\n';
  }
}

void fileRead(const char* file) {
  std::ifstream fin(file);
  
  // Якщо не можливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << file << "'\n";
    return;
  }
  
  while (fin) {
    std::string str;
    std::getline(fin, str);
    
    // Вивід рядка
    std::cout << str << '\n';
  }
}

int main() {
  // Запис в файл
  fileWrite("28.1/temp.txt");
  
  // Читання з файлу
  fileRead("28.1/temp.txt");
  return 0;
}
