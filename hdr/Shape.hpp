// Copyright [2022] Ngo Quang Trung

#ifndef _SHAPE_HPP_ //NOLINT
#define _SHAPE_HPP_

#include <string>
#include <list>
#include "hdr/Constant.hpp"

typedef struct Point {
    int x;
    int y;
    Point(int x, int y) : x(x), y(y) {}
} Point_t;

class Shape {
 protected:
    int mCode;
 public:
    Shape() {}

    virtual ~Shape() {}

    virtual float getPerimeter() = 0;
    virtual float getArea() = 0;
    virtual void fromString(const std::string& str) = 0;;
    virtual std::string toString() = 0;
};

#endif //_SHAPE_HPP_ //NOLINT
