#include "square.h"
#include <iostream>

int main(){

  std::cout << "a square has " << getSquareSides() << " sides\n";
  std::cout << "a square of length 5 has a perimeter length of: " << getSquarePerimeter(5) << '\n';

return 0;
}