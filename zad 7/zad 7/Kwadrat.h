#ifndef KWADRAT_H
#define KWADRAT_H

#include "Prostokat.h"

class Kwadrat : public Prostokat {
public:
    Kwadrat(std::string _kolor, double x, double y, double bok);
    std::string toString() const override;
};

#endif 
