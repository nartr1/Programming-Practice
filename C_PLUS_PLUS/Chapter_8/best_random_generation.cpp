#include <iostream>
#include <random>
#include <ctime>

int main(){
  std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

  std::uniform_int_distribution die{1, 6};

  for(int i{1}; i<=48; ++i){
    std::cout << die(mersenne) << '\t';

    if ( !(i %6) )
      std::cout << '\n';
  }

return 0;
}
