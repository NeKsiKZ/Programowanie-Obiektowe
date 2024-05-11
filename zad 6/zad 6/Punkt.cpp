#include "Punkt.h"

Punkt::Punkt() : x(0), y(0) {}

Punkt::Punkt(int x, int y) : x(x), y(y) {}

Punkt::Punkt(const Punkt& punkt) : x(punkt.x), y(punkt.y) {}

void Punkt::przesun(int dx, int dy) {
    x += dx;
    y += dy;
}

std::ostream& operator<<(std::ostream& os, const Punkt& punkt) {
    os << "(" << punkt.x << ", " << punkt.y << ")";
    return os;
}
