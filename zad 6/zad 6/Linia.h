#ifndef LINIA_H
#define LINIA_H

#include "Punkt.h"

class Linia {
private:
    Punkt punkt1;
    Punkt punkt2;

public:
    Linia();
    Linia(const Punkt& punkt1, const Punkt& punkt2);
    Linia(const Linia& linia);

    void przesun(int dx, int dy);

    friend std::ostream& operator<<(std::ostream& os, const Linia& linia);
};

#endif // LINIA_H
