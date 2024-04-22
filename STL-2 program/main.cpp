#include <iostream>
#include <cmath> // For the round function

// Template function for floating-point types
template<typename T>
T half(T value) {
    return value / 2;
}

// Explicit specialization for int type
template<>
int half(int value) {
    return static_cast<int>(round(value / 2.0));
}

int main() {
    // Test with float
    float floatVal = 3.7f;
    std::cout << "Half of " << floatVal << " is " << half(floatVal) << std::endl;

    // Test with double
    double doubleVal = 5.3;
    std::cout << "Half of " << doubleVal << " is " << half(doubleVal) << std::endl;

    // Test with int
    int intVal = 5;
    std::cout << "Half of " << intVal << " is " << half(intVal) << std::endl;

    return 0;
}
