#include <iostream>
#include <fstream>

void fileSearchName(const char* file) {
  std::ifstream fin(file);
  
  // Якщо не можливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << file << "'\n";
    return;
  }
  
  std::cout << "> searchName = ";
  std::string searchName;
  std::cin >> searchName;
  std::cout << '\n';
  
  const int size = 3;
  std::string name[size];
  while (fin) {
    fin >> name[0] >> name[1] >> name[2];
    
    if (searchName == name[0]) {
      for (int i = 0; i < size; ++i) {
        std::cout << name[i];
      }
      std::cout << '\n';
    }
  }
}

int main() {
  // Знаходження імені в файлі
  fileSearchName("29.1/data.txt");

  // Hell from Windows


  return 0;
}
