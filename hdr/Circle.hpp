// Copyright [2022] Ngo Quang Trung

#ifndef _CIRCLE_HPP_  //NOLINT
#define _CIRCLE_HPP_

#include <string>
#include "hdr/Shape.hpp"

class Circle : public Shape {
    Point_t mCenter;
    int mRadius;
 public:
    Circle();
    explicit Circle(const std::string& str);
    Circle(const Point_t &center, const int &radius);

    ~Circle() {}

    float getPerimeter() override;
    float getArea() override;
    void fromString(const std::string& str) override;
    std::string toString() override;
};

#endif  // _CIRCLE_HPP_  //NOLINT