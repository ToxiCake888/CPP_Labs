#include "closure.h"

int main() {
    printClosure<int>();
    printClosure<float>();
    printClosure<double>();
    printClosure<char>();

    // Дополнительное задание: указание числа шагов в функции printClosure
    printClosure<long long>(10);

    return 0;
}