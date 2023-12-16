#include <iostream>
#include <Vector.h>
#include <Point.h>

int main()
{
    MyPoint point(2, 2);
    MyVector vec(3, 3);

    MyPoint newPoint = point.addPoint(vec);
    std::cout << "New Point: " << newPoint << std::endl;

    double distance = newPoint.distance(point);
    std::cout << "Distance: " << distance << std::endl;

    MyPoint point1(1, 1);
    MyPoint point2(5, 7);
    double distance2 = point1.distance(point2);
    std::cout << "Difference between points 1,1 and 5,7 is: " << distance2 << std::endl;

    return 0;
}