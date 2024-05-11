#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Stos {
public:
    int* zawartosc;
    int index;
    int rozmiar;

    Stos() : zawartosc(nullptr), index(0), rozmiar(0) {}

    void init(Stos* s, unsigned int rozmiar) {
        s->zawartosc = new int[rozmiar];
        s->rozmiar = rozmiar;
        s->index = 0;
    }

    void destroy(Stos* s) {
        delete[] s->zawartosc;
    }

    void push(Stos* s, int v) {
        if (s->index < s->rozmiar) {
            s->zawartosc[s->index++] = v;
        }
    }

    void pop(Stos* s) {
        if (s->index > 0) {
            s->index--;
        }
    }

    int top(Stos* s) {
        return (s->index > 0) ? s->zawartosc[s->index - 1] : -1;
    }

    bool empty(Stos* s) {
        return (s->index == 0);
    }

    bool full(Stos* s) {
        return (s->index == s->rozmiar);
    }

    int wartosc() {
        return rand() % 10 + 1;
    }
};

int main() {
    srand(time(NULL));
    Stos obiekt;

    Stos* s2 = new Stos;
    obiekt.init(s2, 10);
    Stos* s3 = new Stos;
    obiekt.init(s3, 10);

    for (int i = 1; i <= 10; ++i) {
        obiekt.push(s2, obiekt.wartosc());
    }

    while (!obiekt.empty(s2)) {
        obiekt.push(s3, obiekt.top(s2));
        cout << obiekt.top(s3) << endl;
        obiekt.pop(s2);
    }

    obiekt.destroy(s2);
    delete s2;

    obiekt.destroy(s3);
    delete s3;

    return 0;
}
