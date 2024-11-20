#include <iostream>
#include <cmath>

using namespace std;
struct Point {
    double x, y;
};

struct Triangle {
    Point A, B, C;
};

double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}


double area(const Triangle& triangle) {
    double a = distance(triangle.A, triangle.B);
    double b = distance(triangle.B, triangle.C);
    double c = distance(triangle.C, triangle.A);
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    Triangle triangle = {
        {0, 0},
        {0, 3},
        {4, 0}
    };

    cout << "Площа трикутника: " << area(triangle) << endl;

    return 0;
}
