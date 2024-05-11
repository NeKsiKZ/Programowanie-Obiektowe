#include <iostream>
#include "Punkt.h"
#include "Linia.h"

using namespace std;

int main() {
    Punkt* p1 = new Punkt(0, 0);
    Punkt* p2 = new Punkt(1, 1);
    Linia* l1 = new Linia(*p1, *p2);
    Linia* l2 = new Linia(*p1, *p2);

    l1->przesun(5, 5);

    cout << *l1 << endl;
    cout << *l2 << endl;

    delete p1;
    delete p2;
    delete l1;
    delete l2;

    return 0;
}
