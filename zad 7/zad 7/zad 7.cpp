#include <iostream>
#include "Figura.h"
#include "Trojkat.h"
#include "Czworokat.h"
#include "Prostokat.h"
#include "Kwadrat.h"

int main() {
    using namespace std;

    Figura figura("Czerwony");
    cout << figura.toString() << endl;

    Trojkat trojkat("Zielony", 3, 4, 5);
    cout << trojkat.toString() << endl;

    Czworokat czworokat("Niebieski", 3, 4, 5, 6);
    cout << czworokat.toString() << endl;

    Prostokat prostokat("Żółty", 1, 2, 5, 7);
    cout << prostokat.toString() << endl;

    Kwadrat kwadrat("Fioletowy", 2, 3, 4);
    cout << kwadrat.toString() << endl;

    return 0;
}
