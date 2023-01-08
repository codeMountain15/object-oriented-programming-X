// general01.cpp
//

#include <iostream>
using namespace std;


void change(int test[])
{
    test[0] = 10;
}

int main()
{
    int test[] = { 1, 2, 3};
    cout << "test[0] before change() is " << test[0] << endl;
    change(test);
    cout << "test[0] after change() is " << test[0] << endl;

    return 0;
}
