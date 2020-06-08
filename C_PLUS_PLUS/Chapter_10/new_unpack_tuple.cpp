#include <tuple>
#include <iostream>

std::tuple<int, double> returnTuple(){

  return {5, 6.7};

}

int main(){

  auto [a, b]{ returnTuple() };
  std::cout << a << ' ' << b << '\n';

return 0;
}
