#include "QueueExceptions.h"

const char* QueueException::what() const noexcept {
    return "Queue exception occurred";
}

const char* EmptyQueueException::what() const noexcept {
    return "Queue is empty";
}

const char* FullQueueException::what() const noexcept {
    return "Queue is full";
}

InvalidNumberException::InvalidNumberException(int num) : number(num) {}

const char* InvalidNumberException::what() const noexcept {
    return "Invalid number";
}

int InvalidNumberException::getNumber() const noexcept {
    return number;
}
