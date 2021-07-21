#include <fstream>
#include <iostream>

struct People {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По ботькові
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

std::string getString() {
  std::string str;
  std::cin >> str;
  return str;
}

void printPeople(const People& people) {
  std::cout << "Name1: " << people.name1 << '\n'
            << "Name2: " << people.name2 << '\n'
            << "Name3: " << people.name3 << '\n';
  std::cout << '\n';
}

void searchPeople(const char* fileName) {
  std::cout << "> Name1 = ";
  std::string peopleName1 = getString();
  std::cout << '\n';

  std::ifstream fin(fileName);

  // Неможливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << fileName << "'.\n";
    std::cout << '\n';
    return;
  }

  bool isSearch = false;

  People people{};
  while (fin >> people.name1 >> people.name2 >> people.name3) {
    if (people.name1 == peopleName1) {
      printPeople(people);
      isSearch = true;
    }
  }

  if (!isSearch) {
    std::cout << "ERROR: People is not in the database.\n";
    std::cout << '\n';
  }
}

bool checkPeople(const char* fileName, const People& people) {
  std::ifstream fin(fileName);

  // Неможливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << fileName << "'.\n";
    std::cout << '\n';
    return false;
  }

  People search{};
  while (fin >> search.name1 >> search.name2 >> search.name3) {
    if (people.name1 == search.name1 && people.name2 == search.name2 &&
        people.name3 == search.name3) {
      return true;
    }
  }
  return false;
}

void getPeople(People& people) {
  std::cout << "> Name1 = ";
  std::cin >> people.name1;
  std::cout << '\n';

  std::cout << "> Name2 = ";
  std::cin >> people.name2;
  std::cout << '\n';

  std::cout << "> Name3 = ";
  std::cin >> people.name3;
  std::cout << '\n';
}

void addPeople(const char* fileName) {
  People people{};

  // Отримати дані людини
  getPeople(people);
  
  if (checkPeople(fileName, people)) {
    std::cout << "ERROR: XXXX_ERROR_XXXX\n";
    std::cout << '\n';
    return;
  }

  std::ofstream fout(fileName, std::ios::app);

  // Неможливо відкрити файл для запису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for whriting '" << fileName << "'.\n";
    std::cout << '\n';
    return;
  }

  fout << people.name1 << ' ' << people.name2 << ' ' << people.name3 << '\n';
}

int main() {
  while (true) {
    std::cout << "XXXXX_CHOISE_XXXXX:\n"
                 "  1. Search people\n"
                 "  2. Add people\n"
                 "  3. Exit\n"
                 "> ";
    uint16_t choise = getValue();
    std::cout << '\n';

    if (choise == 1) {
      searchPeople("data.txt");
    } else if (choise == 2) {
      addPeople("data.txt");
    } else if (choise == 3) {
      return 0;
    }
  }
  return 0;
}