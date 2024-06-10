#include <iostream>
#include "MojaLista.h"

using namespace std;

int main() {
    MojaLista l;
    l.add(5);
    l.add(2);
    l.add(7);
    l.add(4);
    l.add(3);
    l.add(5);

    MojaLista::Iterator it = l.iterator();
    while (it.hasNext()) {
        cout << it.next() << " ";
    }
    cout << endl;

    return 0;
}
