#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <Vector.h>

template <class U>
class PointAddable {
public:
    virtual U addPoint(const MyVector& other) const = 0;
};

template <class U>
class Subtractable {
public:
    virtual MyVector subtractPoint(const U& other) const = 0;
};

// trida pro euklidovske body se scitanim a odcitanim
template <class U>
class AbstractEuclideanPoint : public PointAddable<U>, public Subtractable<U> {};

class MyPoint : public AbstractEuclideanPoint<MyPoint> {
protected:
    float _x, _y;

public:
    MyPoint(float x, float y) : _x(x), _y(y) {}

    // scitani vektoru s bodem
    MyPoint addPoint(const MyVector& vec) const override {
        return MyPoint(_x + vec.getX(), _y + vec.getY());
    }

    // odcitani bodu od bodu
    MyVector subtractPoint(const MyPoint& other) const override {
        return MyVector(_x - other._x, _y - other._y);
    }

    // vypocet vzdalenosti
    double distance(const MyPoint& other) const {
        MyVector difference = subtractPoint(other);
        return AbstractEVector<MyVector>::norm(difference);
    }

    friend std::ostream &operator<<(std::ostream &os, const MyPoint &point) {
        os << "(" << point._x << ", " << point._y << ")";
        return os;
    }
};

#endif