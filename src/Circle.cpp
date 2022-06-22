// Copyright [2022] Ngo Quang Trung

#include <iostream>
#include <string>
#include <sstream>
#include "hdr/Circle.hpp"
#include "hdr/Constant.hpp"

Circle::Circle():
    mCenter(0, 0),
    mRadius(0) {}

Circle::Circle(const std::string& str):
    mCenter(0, 0),
    mRadius(0) {
    fromString(str);
}

Circle::Circle(const Point_t &center, const int &radius):
    mCenter(center),
    mRadius(radius) {}

float Circle::getPerimeter() {
    // TO-DO:
    // calculates perimeter for Circle;
    return 0;
}

float Circle::getArea() {
    // TO-DO:
    // calculates area for Circle;
    return 0;
}

void Circle::fromString(const std::string& str) {
    std::stringstream ss(str);
    ss >> mCode >> mCenter.x >> mCenter.y >> mRadius;
}

std::string Circle::toString() {
    std::string str = std::to_string(mCode) + " "
        + std::to_string(mCenter.x) + " "
        + std::to_string(mCenter.y) + " "
        + std::to_string(mRadius);
    return str;
}
