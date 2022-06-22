// Copyright [2022] Ngo Quang Trung

#ifndef _SHAPE_FACTORY_HPP_  // NOLINT
#define _SHAPE_FACTORY_HPP_

#include <list>
#include <string>
#include "hdr/Shape.hpp"
#include "hdr/Circle.hpp"
#include "hdr/Ellipse.hpp"
#include "hdr/Rectangle.hpp"
#include "hdr/Triangle.hpp"

class ShapeFactory {
 public:
    Shape *createShape(const std::string &s);
    std::list<Shape *> readShapesFromFile(const std::string &filename);
    void saveShapesToFile(const std::string &filename,
                            const std::list<Shape *> &shapes);
};

#endif  // _SHAPE_FACTORY_HPP_  // NOLINT
