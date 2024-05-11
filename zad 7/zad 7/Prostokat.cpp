#include "Prostokat.h"

Prostokat::Prostokat(std::string _kolor, double x1, double y1, double x2, double y2)
    : Czworokat(_kolor, x1, y1, x2, y2) {}

std::string Prostokat::toString() const {
    return Czworokat::toString() + ", Typ: Prostokat";
}
