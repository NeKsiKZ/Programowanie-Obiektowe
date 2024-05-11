#include "Linia.h"

Linia::Linia() {}

Linia::Linia(const Punkt& punkt1, const Punkt& punkt2) : punkt1(punkt1), punkt2(punkt2) {}

Linia::Linia(const Linia& linia) : punkt1(linia.punkt1), punkt2(linia.punkt2) {}

void Linia::przesun(int dx, int dy) {
    punkt1.przesun(dx, dy);
    punkt2.przesun(dx, dy);
}

std::ostream& operator<<(std::ostream& os, const Linia& linia) {
    os << linia.punkt1 << " -> " << linia.punkt2;
    return os;
}
