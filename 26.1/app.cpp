#include <iostream>
#include <iomanip>

struct Seller {
  std::string name;

  int yearsWorked;
  int bonus = 0;

  double sum;
  double totalSum;
};

void getSellerData(Seller& seller) {
  std::cout << "> seller.name = ";
  std::cin >> seller.name;
  
  std::cout << "> seller.yearsWorked = ";
  std::cin >> seller.yearsWorked;

  std::cout << "> seller.sum = ";
  std::cin >> seller.sum;
  std::cout << '\n';
}

void searchBonus(Seller& seller) {
  if (seller.sum > 5000) {
    seller.bonus = 15;
  } else if (seller.sum < 5000) {
    seller.bonus = 10;
  }

  if (seller.yearsWorked >= 10) {
    ++seller.bonus;
  }
}

void searchTotalSum(Seller& seller) {
  seller.totalSum = seller.sum + (seller.sum / 100 * seller.bonus);
}

void printSellerData(Seller& seller) {
  std::cout << std::setw(15) << seller.name << std::setw(15) << seller.yearsWorked
            << std::setw(10) << seller.bonus << std::setw(10) << seller.sum
            << std::setw(10) << seller.totalSum << '\n';
}

int main() {
  const int size = 3;
  Seller array[size];
  
  for (int i = 0; i < size; ++i) {
    getSellerData(array[i]);

    searchBonus(array[i]);
    searchTotalSum(array[i]);
  }
  
  std::cout << std::setiosflags(std::ios::left);

  std::cout << std::setw(15) << "NAME" << std::setw(15) << "YEARS-WORKED"
            << std::setw(10) << "BONUS" << std::setw(10) << "SUM"
            << std::setw(10) << "TOTAL-SUM" << '\n';

  for (int i = 0; i < size; ++i) {
    printSellerData(array[i]);
  }
  std::cout << '\n';
  return 0;
}