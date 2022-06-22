// Copyright [2022] Ngo Quang Trung

#include <iostream>
#include <string>
#include <sstream>
#include "hdr/Rectangle.hpp"
#include "hdr/Constant.hpp"

Rectangle::Rectangle():
    mCenter(0, 0),
    mWidth(0),
    mHeight(0) {}

Rectangle::Rectangle(const std::string& str):
    mCenter(0, 0),
    mWidth(0),
    mHeight(0) {
    fromString(str);
}

Rectangle::Rectangle(const Point_t &center, const int &width, const int &height):
    mCenter(center),
    mWidth(width),
    mHeight(height) {}

float Rectangle::getPerimeter() {
    // TO-DO:
    // calculates perimeter for Rectangle;
    return 0;
}

float Rectangle::getArea() {
    // TO-DO:
    // calculates area for Rectangle;
    return 0;
}

void Rectangle::fromString(const std::string& str) {
    std::stringstream ss(str);
    ss >> mCode >> mCenter.x >> mCenter.y >> mWidth >> mHeight;;
}

std::string Rectangle::toString() {
    std::string str = std::to_string(mCode) + " "
        + std::to_string(mCenter.x) + " "
        + std::to_string(mCenter.y) + " "
        + std::to_string(mWidth) + " "
        + std::to_string(mHeight);
    return str;
}
