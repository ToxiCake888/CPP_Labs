#include <iostream>


template <typename T>
void charClosure(T data) {
    auto closure = [data]() {
        std::cout << "Closure: " << data << std::endl;
        };

    closure();
}


template <typename T>
void intClosure(T data) {
    auto closure = [data]() {
        std::cout << "Closure: " << data << std::endl;
        };

    closure();
}

int main() {
    charClosure('A');
    charClosure(65);

    intClosure(123);
    intClosure(3.14);

    return 0;
}

