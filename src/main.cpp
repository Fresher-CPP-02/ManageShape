// Copyright [2022] Ngo Quang Trung

#include "hdr/Shape.hpp"
#include "hdr/Circle.hpp"
#include "hdr/Ellipse.hpp"
#include "hdr/Rectangle.hpp"
#include "hdr/Triangle.hpp"
#include "hdr/ShapeFactory.hpp"

int main() {
    ShapeFactory shapeFactory;
    std::list<Shape *> lstShape;

    lstShape = shapeFactory.readShapesFromFile("../data.txt");
    shapeFactory.saveShapesToFile("output.txt", lstShape);

    // Destroy object
    while (lstShape.size()) {
        Shape *shape = lstShape.front();
        lstShape.pop_front();
        delete shape;
        shape = nullptr;
    }

    return 0;
}
