#include <iostream>

class Stack {
public:
    int* data;
    int size;
    int capacity;

    Stack() : data(nullptr), size(0), capacity(0) {
        std::cout << "Konstruktor domyślny Stack()" << std::endl;
    }

    Stack(int i) : size(0), capacity(i) {
        std::cout << "Konstruktor Stack(int)" << this << std::endl;
        data = new int[capacity];
    }

    ~Stack() {
        std::cout << "Destruktor ~Stack()" << this << std::endl;
        delete[] data;
    }

    void push(int v) {
        if (size < capacity) {
            data[size++] = v;
        }
    }

    void pop() {
        if (!empty()) {
            size--;
        }
    }

    int top() {
        if (!empty()) {
            return data[size - 1];
        }
        return -1;
    }

    bool empty() {
        return size == 0;
    }

    bool full() {
        return size == capacity;
    }
};

void function(Stack& s, int a) {
    s.push(a);
}

int main() {
    Stack s(3);
    s.push(0);
    function(s, 1);
    function(s, 2);

    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    return 0;
}
