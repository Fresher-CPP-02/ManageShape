// Copyright [2022] Ngo Quang Trung

#include <iostream>
#include <fstream>
#include <sstream>
#include <exception>

#include "hdr/ShapeFactory.hpp"
#include "hdr/Constant.hpp"
#include "hdr/Circle.hpp"
#include "hdr/Shape.hpp"

Shape *ShapeFactory::createShape(const std::string &s) {
    std::istringstream ss(s);
    std::string type;
    ss >> type;

    switch ((ShapeType)stoi(type)) {
        case ShapeType::E_Triangle: {
            return new Triangle(ss.str());
        }
        case ShapeType::E_Rectangle: {
            return new Rectangle(ss.str());
        }
        case ShapeType::E_Circle: {
            return new Circle(ss.str());
        }
        case ShapeType::E_Ellipse: {
            return new Ellipse(ss.str());
        }
    }

    // throw std::runtime_error();
    return nullptr;
}

std::list<Shape *> ShapeFactory::readShapesFromFile(const std::string &filename) {
    std::list<Shape *> lstShape;
    std::string line;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Could not open the file - '" << filename << "'" << std::endl;
    }
    while (getline(file, line)) {
        Shape *shape = createShape(line);
        if (shape) {
            lstShape.push_back(shape);
        }
    }
    file.close();

    return lstShape;
}

void ShapeFactory::saveShapesToFile(const std::string &filename,
                                    const std::list<Shape *> &shapes) {
    std::ofstream myFile(filename);

    for (auto shape : shapes) {
        myFile << shape->toString() << std::endl;
    }
    myFile.close();
}
