#include <iostream>

#define PRINT_JOE

int main(){

  #ifdef PRINT_JOE
    std::cout << "Joe\n";
  #endif

  #ifdef PRINT_BOB
    std::cout << "Bob\n";
  #endif


#if 0 // Don't compile anything starting here

    std::cout << "Bob\n";

    std::cout << "Steve\n";

#endif // until this point



/*
#ifndef PRINT_BOB
#if !defined(PRINT_BOB)

#ifdef PRINT_BOB
#if defined(PRINT_BOB)

The statements above are equivalent
*/

return 0;
}
