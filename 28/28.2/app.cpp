#include <iostream>
#include <fstream>

void printGreeting(const char* fileName) {
  std::ofstream fout(fileName);

  // Не можливо відкрити файл для запису
  if (!fout) {
    std::cout << "ERROR: Could not be opened for writing '" << fileName << "'.\n";
    std::cout << '\n';
    return;
  }

  // Робота вчителя ой як нелегка.
  // Але ви всі ці дні витрачаєте сили, 
  // Щоб з нас зробити розумнішими та працьовитішими.
  // Щоб не соромно Вам було за нас!
  // Ми щиро Вам раді за старання.
  // І ось сьогодні ми вітаємо Вас з днем народження.
  // Ми хочемо Вам побажати здоров'я, любові і щастя.
  fout << "The work of a teacher is not easy.\n"
          "But you are wasting all these days,\n"
          "To make us smarter and harder working.\n"
          "So that you are not ashamed of us!\n"
          "We sincerely welcome you for your efforts.\n"
          "And today we congratulate you on your birthday.\n"
          "We wish you health, love and happiness.\n";
}

int main() {
  // Вивести привітання
  printGreeting("greeting.txt");
  return 0;
}   