// general02.cpp
// multiple pointers

#include <iostream>
using namespace std;


int main()
{
  int var = 1;

  // Store the address
  // of var in pointer01
  int* pointer01 = &var;


  // Store the address of
  // pointer1 in pointer2
  int** pointer02 = &pointer01;


  // Display the values
  cout << "var = " << var << "\n";
  cout << "*pointer01 = " << *pointer01 << "\n";
  cout << "**pointer02 = " << **pointer02 << "\n";

  return 0;
}
