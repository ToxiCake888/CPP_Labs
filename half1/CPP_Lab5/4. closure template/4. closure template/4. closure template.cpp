#include <iostream>

namespace closure {

    // Замыкание на минимальном значении
    template <typename T>
    auto min(T value) {
        return [value](T x) { return x < value ? x : value; };
    }

    // Замыкание на максимальном значении
    template <typename T>
    auto max(T value) {
        return [value](T x) { return x > value ? x : value; };
    }

} // namespace closure

int main() {
    // Иллюстрация замыкания на различных типах данных

    // Замыкание на минимальном значении для int
    auto minIntClosure = closure::min<int>(5);
    std::cout << "Min int: " << minIntClosure(3) << std::endl;

    // Замыкание на максимальном значении для double
    auto maxDoubleClosure = closure::max<double>(10.5);
    std::cout << "Max double: " << maxDoubleClosure(8.7) << std::endl;

    // Замыкание на минимальном значении для char
    auto minCharClosure = closure::min<char>('a');
    std::cout << "Min char: " << minCharClosure('c') << std::endl;

    // Замыкание на максимальном значении для long
    auto maxLongClosure = closure::max<long>(1000);
    std::cout << "Max long: " << maxLongClosure(1200) << std::endl;

    return 0;
}