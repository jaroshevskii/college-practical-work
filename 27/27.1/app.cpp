#include <iostream>

struct Student {
  std::string name1;  // Призвіще
  std::string name2;  // Ім'я
  std::string name3;  // По ботькові
  std::string group;  // Група
  std::string email;  // Електронна пошта

  uint16_t phone;        // Номер телефону
  uint16_t dateOfBirth;  // Дата народження
  uint16_t missedDays;   // Кількість пропущених днів

  double averageMark;  // Середній бал
};

uint16_t getValue() {
  uint16_t value;
  std::cin >> value;
  return value;
}

void getStudentData(Student& student) {
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
  student.missedDays = getValue();
  
  std::cout << "> Average mark = ";
  std::cin >> student.averageMark;
  std::cout << '\n';
}

void printStudentData(const Student& student) {
  std::cout << "Name1: " << student.name1 << '\n'
            << "Name2: " << student.name2 << '\n'
            << "Name3: " << student.name3 << '\n'
            << "Group: " << student.group << '\n'
            << "Email: " << student.email << '\n'
            << "Phone: " << student.phone << '\n'
            << "Date of birth: " << student.dateOfBirth << '\n'
            << "Missed days: " << student.missedDays << '\n'
            << "Average mark: " << student.averageMark << '\n';
  std::cout << '\n';
}

int main() {
  const uint8_t nStudents = 10;
  Student student[nStudents];

  for (auto i = 0; i < nStudents; ++i) {
    // Отримати дані студента
    getStudentData(student[i]);
  }
  
  for (auto i = 0; i < nStudents; ++i) {
    // Вивести дані студента
    printStudentData(student[i]);
  }
  return 0;
}