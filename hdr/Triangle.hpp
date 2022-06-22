// Copyright [2022] Ngo Quang Trung

#ifndef _TRIANGLE_HPP_  // NOLINT
#define _TRIANGLE_HPP_

#include <string>
#include "hdr/Shape.hpp"

class Triangle : public Shape {
    Point_t mApexA;
    Point_t mApexB;
    Point_t mApexC;

 public:
    Triangle();
    explicit Triangle(const std::string& str);
    Triangle(const Point_t &apexA, const Point_t &apexB, const Point_t &apexC);

    ~Triangle() {}

    float getPerimeter() override;
    float getArea() override;
    void fromString(const std::string& str) override;
    std::string toString() override;
};

#endif  // _TRIANGLE_HPP_  // NOLINT
