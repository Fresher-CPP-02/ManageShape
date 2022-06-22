// Copyright [2022] Ngo Quang Trung

#include <iostream>
#include <string>
#include <sstream>
#include "hdr/Triangle.hpp"
#include "hdr/Constant.hpp"

Triangle::Triangle():
    mApexA(0, 0),
    mApexB(0, 0),
    mApexC(0, 0) {}

Triangle::Triangle(const std::string& str):
    mApexA(0, 0),
    mApexB(0, 0),
    mApexC(0, 0) {
        fromString(str);
}

Triangle::Triangle(const Point_t &apexA, const Point_t &apexB, const Point_t &apexC):
    mApexA(apexA),
    mApexB(apexB),
    mApexC(apexC) {}

float Triangle::getPerimeter() {
    // TO-DO:
    // calculates perimeter for Triangle;
    return 0;
}

float Triangle::getArea() {
    // TO-DO:
    // calculates area for Triangle;
    return 0;
}

void Triangle::fromString(const std::string& str) {
    std::stringstream ss(str);
    ss >> mCode >> mApexA.x >> mApexA.y >> mApexB.x >> mApexB.y >> mApexC.x >> mApexC.y;
}

std::string Triangle::toString() {
    std::string str = std::to_string(mCode) + " "
        + std::to_string(mApexA.x) + " "
        + std::to_string(mApexA.y) + " "
        + std::to_string(mApexB.x) + " "
        + std::to_string(mApexB.y) + " "
        + std::to_string(mApexC.x) + " "
        + std::to_string(mApexC.y);
    return str;
}
