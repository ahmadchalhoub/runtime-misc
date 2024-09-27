#include <iostream>
#include <cmath>

class Point {
public:
    double x, y;

    Point(double x_coord, double y_coord) : x(x_coord), y(y_coord) {}
};

double computeTriangleArea(const Point& A, const Point& B, const Point& C) {
    return std::abs((A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y-B.y)) / 2.0);
}

int main() {
    // Define the points of the triangle
    Point A(0.0, 0.0);
    Point B(4.0, 0.0);
    Point C(0.0, 3.0);

    // Compute the area of the triangle
    double area = computeTriangleArea(A, B, C);

    // Output the result
    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}