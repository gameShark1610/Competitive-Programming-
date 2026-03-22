#include <iostream>
#include <format> // Requires C++20

struct Point {
    double x, y;
};

int main() {
    Point p = {.x = 10.0, .y = 20.0}; // C++20 feature
    std::cout << std::format("Point coordinates: ({}, {})", p.x, p.y) << std::endl;
    return 0;
}
