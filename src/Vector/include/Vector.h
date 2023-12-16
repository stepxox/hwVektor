#ifndef VECT_H
#define VECT_H

#include <iostream>
#include <cmath>

template <class T>
class Scalarable{
public:
    virtual float scalar(const T &other) const = 0;
};

template <class T>
class Addable{
public:
    virtual T operator+(const T &other) const = 0;
};

// trida pro evektory se skalarnim nasobenim a scitanim
template <class T>
class AbstractEVector : public Scalarable<T>, public Addable<T> {
public:
    static float norm(const T &other){
        return sqrt(other.scalar(other));
    }
};

class MyVector : public AbstractEVector<MyVector>{
protected:
    float _x, _y;

public:
    MyVector(float x, float y) {
        _x = x;
        _y = y;
    }

    float getX() const { return _x; }

    float getY() const { return _y; }

    MyVector operator+(const MyVector &other) const override{
        return MyVector(_x + other._x, _y + other._y);
    }

    // implementace skal nasobeni
    float scalar(const MyVector &other) const override {
        return _x * other._x + _y * other._y;
    };

    friend std::ostream &operator<<(std::ostream &os, const MyVector &other){
        os << other._x << "," << other._y << std::endl;
        return os;
    }
};

#endif