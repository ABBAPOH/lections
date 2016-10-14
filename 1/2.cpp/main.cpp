#include <iostream>

class Point
{
public:
    Point() = default;
    Point(int x, int y) : _x(x), _y(y) {}
    Point(const Point &other) = default;

    Point &operator =(const Point &other) = default;

    inline int x() const { return _x; }
    inline int y() const { return _y; }

    inline int manhattanLength() const { return abs(_x) + abs(_y); }

private:
    int _x {0};
    int _y {0};
};

inline Point operator +(const Point &lhs, const Point &rhs)
{
    return Point(lhs.x() + rhs.x(), lhs.y() + lhs.y());
}

inline Point operator -(const Point &lhs, const Point &rhs)
{
    return Point(lhs.x() - rhs.x(), lhs.y() - rhs.y());
}

int main(int argc, char *argv[])
{
    Point p1(10, 20);
    Point p2(20, 30);
    std::cout << "Point (" << p1.x() << ", " << p1.y() << ")" << std::endl;
    std::cout << "Point (" << p2.x() << ", " << p2.y() << ")" << std::endl;
    std::cout << "length = " << (p1 - p2).manhattanLength() << std::endl;
    return 0;
}

