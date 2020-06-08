#include <array>
#include <iostream>

int main(){

  std::array myArray {7,3,1,9,5};

  for (auto i{ myArray.size() }; i-- > 0; ){
    std::cout << myArray[i] << '\n';
  }

return 0;
}
