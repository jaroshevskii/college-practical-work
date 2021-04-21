#include <iostream>
#include <iomanip>

struct Student {
  std::string name;         // Ім'я
  std::string group;        // Група
  std::string mail;         // Електронна пошта
  std::string phoneNumber;  // Номер телефону
  std::string dateOfBirth;  // Дата народження
  
  double averageMark;  // Середній бал
  int missedDays;      // Кількість пропущених днів
};

void getStudentData(Student& student) {
  std::cout << "> student.name = ";
  std::cin >> student.name;

  std::cout << "> student.group = ";
  std::cin >> student.group;
  
  std::cout << "> student.mail = ";
  std::cin >> student.mail;

  std::cout << "> student.phoneNumber = ";
  std::cin >> student.phoneNumber;

  std::cout << "> student.dateOfBirth = ";
  std::cin >> student.dateOfBirth;

  std::cout << "> student.averageMark = ";
  std::cin >> student.averageMark;
  
  std::cout << "> student.missedDays = ";
  std::cin >> student.missedDays;
  std::cout << '\n';
}

void printStudentData(Student& student) {
  std::cout << std::setw(10) << student.name << std::setw(7) << student.group
            << std::setw(15) << student.mail << std::setw(15) << student.phoneNumber
            << std::setw(15) << student.dateOfBirth << std::setw(14) << student.averageMark
            << std::setw(13) << student.missedDays << '\n';
}

int main() {
  const int size = 10;
  Student array[size];

  for (int i = 0; i < size; ++i) {
    // Отримання даних студента 
    getStudentData(array[i]);
  }
  
  std::cout << std::setiosflags(std::ios::left);

  std::cout << std::setw(10) << "NAME" << std::setw(7) << "GROUP"
            << std::setw(15) << "MAIL" << std::setw(15) << "PHONE-NUMBER"
            << std::setw(15) << "DATE-OF-BIRTH" << std::setw(14) << "AVERAGE-MARK"
            << std::setw(13) << "MISSED-DAYS" << '\n';

  for (int i = 0; i < size; ++i) {
    // Виведення даних студента
    printStudentData(array[i]);
  }
  std::cout << '\n';
  return 0;
}
