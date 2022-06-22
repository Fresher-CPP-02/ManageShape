cmake_minimum_required(VERSION 3.10)

project(ManageShape)

SET(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# set(CMAKE_AUTOMOC ON)

# Create a list with all source/header files
set( project_sources
   src/main.cpp
   src/Circle.cpp
   src/Ellipse.cpp
   src/Rectangle.cpp
   src/ShapeFactory.cpp
   src/Triangle.cpp
)

set( project_headers
   hdr/Circle.hpp
   hdr/Constant.hpp
   hdr/Ellipse.hpp
   hdr/Rectangle.hpp
   hdr/Shape.hpp
   hdr/ShapeFactory.hpp
   hdr/Triangle.hpp
)

# Create executable with all necessary source files
add_executable(${PROJECT_NAME}
  ${project_sources}
  ${project_headers}
)

