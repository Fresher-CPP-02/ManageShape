// Copyright [2022] Ngo Quang Trung

#include <iostream>
#include <string>
#include <sstream>
#include "hdr/Ellipse.hpp"
#include "hdr/Constant.hpp"

Ellipse::Ellipse():
    mCenter(Point(0, 0)),
    mRadius1(0),
    mRadius2(0) {}

Ellipse::Ellipse(const std::string& str):
    mCenter(Point(0, 0)),
    mRadius1(0),
    mRadius2(0) {
    fromString(str);
}

Ellipse::Ellipse(Point_t center, int radius1, int radius2) :
    mCenter(center),
    mRadius1(radius1),
    mRadius2(radius2) {}

float Ellipse::getPerimeter() {
    // TO-DO:
    // calculates perimeter for Ellipse;

  return 0;
}

float Ellipse::getArea() {
    // TO-DO:
    // calculates area for Ellipse;

    return 0;
}

void Ellipse::fromString(const std::string& str) {
    std::stringstream ss(str);
    ss >> mCode >> mCenter.x >> mCenter.y >> mRadius1 >> mRadius2;
}

std::string Ellipse::toString() {
    std::string str = std::to_string(mCode) + " "
        + std::to_string(mCenter.x) + " "
        + std::to_string(mCenter.y) + " "
        + std::to_string(mRadius1) + " "
        + std::to_string(mRadius2);

  return str;
}
