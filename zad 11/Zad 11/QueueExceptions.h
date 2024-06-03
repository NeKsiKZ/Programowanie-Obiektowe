#ifndef QUEUE_EXCEPTIONS_H
#define QUEUE_EXCEPTIONS_H

#include <exception>

class QueueException : public std::exception {
public:
    virtual const char* what() const noexcept override;
};

class EmptyQueueException : public QueueException {
public:
    const char* what() const noexcept override;
};

class FullQueueException : public QueueException {
public:
    const char* what() const noexcept override;
};

class InvalidNumberException : public QueueException {
private:
    int number;
public:
    InvalidNumberException(int num);
    const char* what() const noexcept override;
    int getNumber() const noexcept;
};

#endif // QUEUE_EXCEPTIONS_H
