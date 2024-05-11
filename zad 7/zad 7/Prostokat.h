#ifndef PROSTOKAT_H
#define PROSTOKAT_H

#include "Czworokat.h"

class Prostokat : public Czworokat {
public:
    Prostokat(std::string _kolor, double x1, double y1, double x2, double y2);
    std::string toString() const override;
};

#endif 
