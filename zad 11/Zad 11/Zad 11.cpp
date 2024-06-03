#include <iostream>
#include "FIFO.h"
#include "QueueExceptions.h"

void printStackTrace(const QueueException& e) {
    std::cerr << e.what() << std::endl;
}

void handleQueueOperations() {
    int maxNumber, capacity;
    std::cout << "Enter the maximum number (N): ";
    std::cin >> maxNumber;
    std::cout << "Enter the capacity of the queue: ";
    std::cin >> capacity;

    FIFO fifo(maxNumber, capacity);

    while (true) {
        std::cout << "1. Push\n2. Pop\n3. Exit\nChoose an option: ";
        int choice;
        std::cin >> choice;

        try {
            if (choice == 1) {
                int num;
                std::cout << "Enter a number to push: ";
                std::cin >> num;
                fifo.push(num);
                std::cout << "Number pushed successfully." << std::endl;
            }
            else if (choice == 2) {
                int num = fifo.pop();
                std::cout << "Popped number: " << num << std::endl;
            }
            else if (choice == 3) {
                break;
            }
            else {
                std::cerr << "Invalid choice. Please try again." << std::endl;
            }
        }
        catch (const EmptyQueueException& e) {
            printStackTrace(e);
            break; // Koniec programu
        }
        catch (const FullQueueException& e) {
            std::cerr << e.what() << std::endl;
            printStackTrace(e);
        }
        catch (const InvalidNumberException& e) {
            std::cerr << e.what() << ": " << e.getNumber() << std::endl;
            std::cerr << "Please try again." << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
        }
    }
}

int main() {
    try {
        handleQueueOperations();
    }
    catch (const std::exception& e) {
        std::cerr << "An unexpected error occurred in main: " << e.what() << std::endl;
    }
    return 0;
}
