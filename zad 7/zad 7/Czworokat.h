#ifndef CZWOROKAT_H
#define CZWOROKAT_H

#include "Figura.h"

class Czworokat : public Figura {
public:
    Czworokat(std::string _kolor, double a, double b, double c, double d);
    std::string toString() const override;
};

#endif 
