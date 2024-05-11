#include "Kwadrat.h"

Kwadrat::Kwadrat(std::string _kolor, double x, double y, double bok)
    : Prostokat(_kolor, x, y, x + bok, y + bok) {}

std::string Kwadrat::toString() const {
    return Prostokat::toString() + ", Typ: Kwadrat";
}