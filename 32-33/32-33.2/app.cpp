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

void searchCountry(const char* fileName) {
  std::cout << "> Country name = ";
  std::string countryName = getString();
  std::cout << '\n';

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
  // Пошук країни
  searchCountry("country_list.txt");
  return 0;
}