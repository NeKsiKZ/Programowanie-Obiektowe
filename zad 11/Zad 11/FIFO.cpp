#include "FIFO.h"

FIFO::FIFO(int maxNumber, int capacity) : maxNumber(maxNumber), capacity(capacity) {}

void FIFO::push(int num) {
    if (num < 0 || num > maxNumber) {
        throw InvalidNumberException(num);
    }
    if (queue.size() == capacity) {
        throw FullQueueException();
    }
    queue.push(num);
}

int FIFO::pop() {
    if (queue.empty()) {
        throw EmptyQueueException();
    }
    int front = queue.front();
    queue.pop();
    return front;
}

bool FIFO::isEmpty() const {
    return queue.empty();
}

bool FIFO::isFull() const {
    return queue.size() == capacity;
}
