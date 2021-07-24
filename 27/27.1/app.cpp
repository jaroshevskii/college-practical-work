#include <iostream>

struct Student {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По ботькові

  std::string group;     // Група
  std::string email;     // Електронна пошта
  uint16_t phone;        // Номер телефону
  uint16_t dateOfBirth;  // Дата народження

  uint16_t nMissedDays;  // Кількість пропущених днів
  double averageMark;    // Середній бал
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

// Отримати дані студента
void getStudent(Student& student) {
  std::cout << "> Name1 = ";
  std::cin >> student.name1;

  std::cout << "> Name2 = ";
  std::cin >> student.name2;
  
  std::cout << "> Name3 = ";
  std::cin >> student.name3;

  std::cout << "> Group = ";
  std::cin >> student.group;
  
  std::cout << "> Email = ";
  std::cin >> student.email;
  
  std::cout << "> Phone = ";
  student.phone = getValue();
  
  std::cout << "> Date of birth = ";
  student.dateOfBirth = getValue();
  
  std::cout << "> Missed days = ";
  student.nMissedDays = getValue();
  
  std::cout << "> Average mark = ";
  std::cin >> student.averageMark;
  std::cout << '\n';
}

// Вивести дані студента
void printStudent(const Student& student) {
  std::cout << "Name1: " << student.name1 << '\n'
            << "Name2: " << student.name2 << '\n'
            << "Name3: " << student.name3 << '\n'
            << "Group: " << student.group << '\n'
            << "Email: " << student.email << '\n'
            << "Phone: " << student.phone << '\n'
            << "Date of birth: " << student.dateOfBirth << '\n'
            << "Missed days: " << student.nMissedDays << '\n'
            << "Average mark: " << student.averageMark << '\n';
  std::cout << '\n';
}

int main() {
  const uint8_t nStudents = 3;
  Student student[nStudents];

  for (auto i = 0; i < nStudents; ++i) {
    // Отримати дані студента
    getStudent(student[i]);
  }
  
  for (auto i = 0; i < nStudents; ++i) {
    std::cout << "--------------------------------\n";

    // Вивести дані студента
    printStudent(student[i]);
  }

  std::cout << "--------------------------------\n";
  std::cout << '\n';
  return 0;
}