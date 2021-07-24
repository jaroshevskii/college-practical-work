#include <iostream>
#include <fstream>

struct Country {
  std::string name;     // Назва
  std::string capital;  // Столиця

  uint32_t nPeople;  // Кількість людей
};

void printCountry(const Country& country) {
  std::cout << "Name: " << country.name << '\n'
            << "Capital: " << country.capital << '\n'
            << "People: " << country.nPeople << '\n';
  std::cout << '\n';
}

void searchCountry(const char* fileName, std::string& countryName) {
  std::ifstream fin(fileName);

  // Не можливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << fileName << "'.\n";
    std::cout << '\n';
    return;
  }
  
  bool isSearch = false;
  
  Country country{};
  while (fin >> country.name >> country.capital >> country.nPeople) {
    if (country.name == countryName) {
      printCountry(country);
      isSearch = true;
    }
  }
  
  if (!isSearch) {
    std::cout << "ERROR: Country is not in the database.\n";
    std::cout << '\n';
  }
}

int main() {
  std::cout << "> Country name = ";
  std::string countryName;
  std::cin >> countryName;
  std::cout << '\n';

  // Знайти країну
  searchCountry("countrys_database.txt", countryName);
  return 0;
}