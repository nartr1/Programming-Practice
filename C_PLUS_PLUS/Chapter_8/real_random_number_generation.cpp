#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

  std::srand(static_cast<unsigned int>(std::time(nullptr)));

  for(int i{1};i<=100;++i){
    std::cout << std::rand() << '\t';
    if (!(i%5))
      std::cout << '\n';
  }

return 0;
}
