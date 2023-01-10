// general03.cpp
// friend class

#include <iostream>
using namespace std;

// class declaration
class Pontikaros;

class Pithari {
private:
    int num_of_fruits;
    int num_of_biscuits;
    int num_of_pies;

public:
    // constructor to initialize numB to 1
    Pithari(int a, int b, int c) : num_of_fruits(a), num_of_biscuits(b), num_of_pies(c) {}

    // get values
    void show_content() {
        cout << num_of_fruits << " fruits\n" << num_of_biscuits << " biscuits\n" << num_of_pies << " pies\n";
    }

    // member function to add numA
    friend class Pontikaros;
};

class Pontikaros {
private:
    bool hungry;
    int weight; // in kilos

public:
    // constructor
    Pontikaros() : hungry(true), weight(2) {}

    void eat_from(Pithari* p) {
        if (hungry) {
            p->num_of_fruits -= 2;   // eat 2 fruits
            p->num_of_biscuits -= 3; // eat 2 biscuits
            p->num_of_pies -= 1;     // eat 1 pie

            hungry = false;
            weight += 3;
        }
    }
};

int main() {
    Pithari pithos(5, 5, 2);
    Pontikaros Mitsos;
    
    cout << "Pithari before:\n";
    pithos.show_content();

    Mitsos.eat_from(&pithos);
    
    cout << "\nPithari after:\n";
    pithos.show_content();

    return 0;
}
