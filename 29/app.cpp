#include <iostream>
#include <fstream>

void fileWrite(const char* file) {
  std::ofstream fout(file, std::ios::app);
  
  // Якщо не можливо відкрити файл для запису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for writing '" << file << "'\n";
    return;
  }

  std::cout << "> value = ";
  int value;
  std::cin >> value;
  std::cout << '\n';
  
  std::string surname;         // Призвіще
  std::string name;            // Ім'я
  std::string nameFromFather;  // По батькові

  for (int i = 0; i < value; ++i) {
    std::cout << "> Surname: ";
    std::cin >> surname;
    std::cout << "> Name: ";
    std::cin >> name;
    std::cout << "> Name from father: ";
    std::cin >> nameFromFather;
    std::cout << '\n';

    // Запис ПІБ у файл
    fout << surname << ' ' << name  << ' ' << nameFromFather << '\n';
  }
}

void fileSearchSurname(const char* file) {
  std::ifstream fin(file);
  
  // Якщо не можливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << file << "'\n";
    return;
  }
  
  std::cout << "> Search Surname: ";
  std::string searchSurname;
  std::cin >> searchSurname;
  std::cout << '\n';
  
  bool isSearchSurname;  // Знайдено призвіще
  std::string surname;   // Призвіще

  while (fin) {
    fin >> surname;
    
    if (searchSurname == surname) {
      isSearchSurname = true;
      std::string str;
      getline(fin, str);
      std::cout << str << '\n';
    }
  }

  if (!isSearchSurname) {
    std::cout << "ERROR: No one was with surnmame '" << searchSurname << "'\n";
    std::cout << '\n';
  }
}

int main() {
  // Запис ПІБ у файл
  fileWrite("29/data.txt");

  // Знаходження призвіща в файлі
  fileSearchSurname("29/data.txt");
  return 0;
}
