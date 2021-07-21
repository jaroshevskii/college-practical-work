#include <iostream>
#include <fstream>
#include <string>

void writeFile(const char* fileName) {
  std::ofstream fout(fileName);
  
  // Не можливо відкрити файл для запису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for writing '" << fileName << "'.\n";
    std::cout << '\n';
    return;
  }

  std::string str;
  for (auto i = 0; i != 2; ++i) {
    std::cout << "> String = ";
    getline(std::cin, str);
    std::cout << '\n';

    fout << str << '\n';
  }
}

void readFile(const char* fileName) {
  std::ifstream fin(fileName);

  // Не можливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << fileName << "'.\n";
    std::cout << '\n';
    return;
  }
  
  std::string str;
  while (getline(fin, str)) {
    std::cout << str << '\n';
  }
  std::cout << '\n';
}
int main() {
  writeFile("temp.txt");

  readFile("temp.txt");
  return 0;
}