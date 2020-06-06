#include <iostream>
int main(){
	int x = 5;

	std::cout << (x != 5 ? x : "x is 5"); // won't compile
return 0;
}
//The types on either side of the : operator must be matching types
