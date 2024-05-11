#include "Figura.h"

Figura::Figura(std::string _kolor) : kolor(_kolor) {}

std::string Figura::toString() const {
    return "Kolor: " + kolor;
}
