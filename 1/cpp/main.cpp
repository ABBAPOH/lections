#include <iostream>

class Point
{
public:
    Point() = default;
    Point(int x, int y) : _x(x), _y(y) {}
    Point(const Point &other) = default;

    Point &operator =(const Point &other) = default;

    int x() const { return _x; }
    int y() const { return _y; }

    int manhattanLength() const { return abs(_x) + abs(_y); }

private:
    int _x {0};
    int _y {0};
};

int main(int argc, char *argv[])
{
    Point p(10, 20);
    std::cout << "x = " << p.x() << std::endl;
    std::cout << "y = " << p.y() << std::endl;
    std::cout << "length = " << p.manhattanLength() << std::endl;
    return 0;
}
