// Copyright [2022] Ngo Quang Trung

#ifndef _ELLIPSE_HPP_ // NOLINT
#define _ELLIPSE_HPP_

#include <string>
#include "hdr/Shape.hpp"

class Ellipse : public Shape {
    Point_t mCenter;
    int mRadius1;
    int mRadius2;

 public:
    Ellipse();
    explicit Ellipse(const std::string& str);
    Ellipse(Point_t center, int radius1, int radius2);

    ~Ellipse() {}

    float getPerimeter() override;
    float getArea() override;
    void fromString(const std::string& str) override;
    std::string toString() override;
};

#endif  // _ELLIPSE_HPP_ // NOLINT
