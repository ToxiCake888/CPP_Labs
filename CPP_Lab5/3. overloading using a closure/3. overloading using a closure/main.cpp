#include "closure.h"

int main() {
    printClosure<int>();
    printClosure<float>();
    printClosure<double>();
    printClosure<char>();

    // �������������� �������: �������� ����� ����� � ������� printClosure
    printClosure<long long>(10);

    return 0;
}