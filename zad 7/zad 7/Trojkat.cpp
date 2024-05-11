#include "Trojkat.h"

Trojkat::Trojkat(std::string _kolor, double a, double b, double c) : Figura(_kolor) {}

std::string Trojkat::toString() const {
    return Figura::toString() + ", Typ: Trojkat";
}
