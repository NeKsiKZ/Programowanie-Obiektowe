#ifndef TROJKAT_H
#define TROJKAT_H

#include "Figura.h"

class Trojkat : public Figura {
public:
    Trojkat(std::string _kolor, double a, double b, double c);
    std::string toString() const override;
};

#endif 
