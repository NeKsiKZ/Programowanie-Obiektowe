#ifndef MOJALISTA_H
#define MOJALISTA_H

#include <list>
#include <iterator>
#include <algorithm>
#include <stdexcept>

using namespace std;

class MojaLista {
private:
    list<int> lista;

public:
    void add(int value) {
        auto it = lower_bound(lista.begin(), lista.end(), value);
        lista.insert(it, value);
    }

    class Iterator {
    private:
        list<int>::iterator current;
        list<int>::iterator end;
        bool next_called;

    public:
        Iterator(list<int>::iterator start, list<int>::iterator end)
            : current(start), end(end), next_called(false) {}

        bool hasNext() {
            auto temp = current;
            if (temp == end) return false;
            if (next_called) advance(temp, 1);
            return temp != end;
        }

        int next() {
            if (!hasNext()) throw out_of_range("No more elements");
            if (next_called) advance(current, 1);
            next_called = true;
            int value = *current;
            advance(current, 1);
            return value;
        }

        void remove() {
            throw runtime_error("Remove operation not supported");
        }
    };

    Iterator iterator() {
        return Iterator(lista.begin(), lista.end());
    }
};

#endif
