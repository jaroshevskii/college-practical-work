#include <iostream>

struct Country {
  std::string name;  // Назва країни
  std::string capital;  // Столиця країни

  int population;  // Популяція населення в країні
};

// Знаходження даних про країну
void searchCountryData(Country& country) {
  std::cout << "> country.name = ";
  std::getline(std::cin, country.name);
  std::cout << '\n';
  
  if (country.name == "France") {
    country.capital = "Paris";
    country.population = 67406000;
  } else if (country.name == "Spain") {
    country.capital = "Madrid";
    country.population = 47450795;
  } else if (country.name == "Spain") {
    country.capital = "Madrid";
    country.population = 47450795;
  } else if (country.name == "United States") {
    country.capital = "Washington, D.C.";
    country.population = 331,449,281;
  } else if (country.name == "China") {
    country.capital = "Beijing";
    country.population = 1410000000;
  } else if (country.name == "Italy") {
    country.capital = "Rome";
    country.population = 60317116;
  } else if (country.name == "Turkey") {
    country.capital = "Ankara";
    country.population = 83614362;
  } else if (country.name == "Mexico") {
    country.capital = "Mexico City";
    country.population = 126014024;
  } else if (country.name == "Ukraine") {
    country.capital = "Kiev";
    country.population = 41723998;
  } else if (country.name == "Ukraine") {
    country.capital = "Kiev";
    country.population = 41723998;
  } else if (country.name == "Japan") {
    country.capital = "Tokyo";
    country.population = 125410000;
  } else {
    country.name == "";
  }
}

// Виведення даних країни
void printCountryData(Country& country) {
  std::cout << "Capital: " << country.capital << "\n"
               "Population: " << country.population << '\n';
  std::cout << '\n';
}

int main() {
  Country country;

  // Знаходження даних про країну
  searchCountryData(country);

  if (country.name == "") {
    std::cout << "Error: country is not in the database\n";
    std::cout << '\n';
    return 0;
  }
  
  // Виведення даних країни
  printCountryData(country);
  return 0;
}