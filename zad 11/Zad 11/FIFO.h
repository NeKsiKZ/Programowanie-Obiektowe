#ifndef FIFO_H
#define FIFO_H

#include <queue>
#include "QueueExceptions.h"

class FIFO {
private:
    std::queue<int> queue;
    int capacity;
    int maxNumber;

public:
    FIFO(int maxNumber, int capacity);

    void push(int num);
    int pop();
    bool isEmpty() const;
    bool isFull() const;
};

#endif // FIFO_H
