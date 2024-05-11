#ifndef FIGURA_H
#define FIGURA_H

#include <string>

class Figura {
protected:
    std::string kolor;
public:
    Figura(std::string _kolor);
    virtual std::string toString() const;
};

#endif 
