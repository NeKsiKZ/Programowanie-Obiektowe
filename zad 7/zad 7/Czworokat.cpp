#include "Czworokat.h"

Czworokat::Czworokat(std::string _kolor, double a, double b, double c, double d) : Figura(_kolor) {}

std::string Czworokat::toString() const {
    return Figura::toString() + ", Typ: Czworokat";
}
