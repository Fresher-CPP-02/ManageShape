// Copyright [2022] Ngo Quang Trung

#ifndef _RECTANGLE_HPP_ // NOLINT
#define _RECTANGLE_HPP_

#include <string>
#include <list>
#include "hdr/Shape.hpp"

class Rectangle : public Shape {
    Point_t mCenter;
    int mWidth;
    int mHeight;

 public:
    Rectangle();
    explicit Rectangle(const std::string& str);
    Rectangle(const Point_t& center, const int& width, const int& height);

    ~Rectangle() {}

    float getPerimeter() override;
    float getArea() override;
    void fromString(const std::string& str) override;
    std::string toString() override;
};

#endif  // _RECTANGLE_HPP_ // NOLINT
