#include <iostream>

template <typename T>
auto closureMin(T initialValue) {
    return [=](int steps) {
        T value = initialValue;
        for (int i = 0; i < steps; ++i) {
            value = std::min(value, static_cast<T>(i));
        }
        return value;
        };
}

template <typename T>
auto closureMax(T initialValue) {
    return [=](int steps) {
        T value = initialValue;
        for (int i = 0; i < steps; ++i) {
            value = std::max(value, static_cast<T>(i));
        }
        return value;
        };
}

template <typename T>
void printClosure(int steps = 5) {
    auto minClosure = closureMin<T>(T());
    auto maxClosure = closureMax<T>(T());

    std::cout << "Closure illustration for type " << typeid(T).name() << ":\n";

    std::cout << "  closureMin: ";
    for (int i = 0; i <= steps; ++i) {
        std::cout << minClosure(i) << " ";
    }
    std::cout << "\n";

    std::cout << "  closureMax: ";
    for (int i = 0; i <= steps; ++i) {
        std::cout << maxClosure(i) << " ";
    }
    std::cout << "\n\n";
}