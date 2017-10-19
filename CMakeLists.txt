cmake_minimum_required(VERSION 3.8)
project(Inheritance)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp Counter.cpp Counter.h)
#set(SOURCE_FILES testDistance.cpp Distance.h Distance.cpp)
#set(SOURCE_FILES testEmployee.cpp employee.cpp employee.h manager.cpp manager.h scientist.cpp scientist.h laborer.cpp laborer.h student.cpp student.h)
#set(SOURCE_FILES createMultiInheritance.cpp)
set(SOURCE_FILES diamond.cpp)

add_executable(Inheritance ${SOURCE_FILES})