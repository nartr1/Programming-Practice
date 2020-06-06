#include <iostream>
#include "constants.h" // include all the forward declarations

int main(){
  std::cout << "Enter a radius: ";
  int radius{};
  std::cin >> radius;
  std::cout << "The circumference is: " << 2 * radius * constants::pi << '\n';
}
