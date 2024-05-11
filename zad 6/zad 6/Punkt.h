#ifndef PUNKT_H
#define PUNKT_H

#include <iostream>

class Punkt {
private:
    int x;
    int y;

public:
    Punkt();
    Punkt(int x, int y);
    Punkt(const Punkt& punkt);

    void przesun(int dx, int dy);

    friend std::ostream& operator<<(std::ostream& os, const Punkt& punkt);
};

#endif // PUNKT_H
