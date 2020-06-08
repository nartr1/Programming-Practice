#include <array>
#include <iostream>
#include <iterator>

int main(){

  std::array array{1,2,3};


  auto begin{ std::begin(array) };
  auto end{ std::end(array) };

  for (auto p{ begin }; p != end; ++p){
    std::cout << *p << ' ';
  }

  std::cout << '\n';

return 0;
}
