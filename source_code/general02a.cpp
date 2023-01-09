// general02a.cpp
// multiple pointer
// and addresses

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
  cout << "1.       &var = " << &var << "\n";
  cout << "2.  pointer01 = " << pointer01 << "\n";
  cout << "3. *pointer02 = " << *pointer02 << "\n\n";

  cout << "4.        var = " << var << "\n";
  cout << "5. &pointer01 = " << &pointer01 << "\n";
  cout << "6.  pointer02 = " << pointer02 << "\n\n";

  return 0;
}
