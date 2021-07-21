#include <iostream>
#include <fstream>

struct Country {
  std::string name;     // Назва
  std::string capital;  // Столиця

  uint32_t nPeople;  // Кількість людей
};

std::string getString() {
  std::string str;
  std::cin >> str;
  return str;
}

void printCountry(const Country& country) {
  std::cout << "Name: " << country.name << '\n'
            << "Capital: " << country.capital << '\n'
            << "People: " << country.nPeople << '\n';
  std::cout << '\n';
}

void searchCountry(const char* fileName, const std::string& countryName) {
  Country country{};

  std::ifstream fin(fileName);

  // Неможливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << fileName << "'\n";
    std::cout << '\n';
    return;
  }
  
  while (fin >> country.name >> country.capital >> country.nPeople) {
    if (country.name == countryName) {
      printCountry(country);
      return;
    }
  }

  std::cout << "ERROR: Country is not in the database\n";
  std::cout << '\n';
}

int main() {
  std::cout << "What country name?\n"
               "> ";
  std::string countryName = getString();
  std::cout << '\n';

  // Пошук країни
  searchCountry("xcountry_list.txt", countryName);
  return 0;
}