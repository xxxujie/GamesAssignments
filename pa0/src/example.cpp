#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

#include "example/example.h"

void show_example()
{
    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << "a = " << a << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "sqrt(b) = " << std::sqrt(b) << std::endl;
    // std 的三角函数采用弧度制
    double PI = std::acos(-1);
    std::cout << "PI = arccos(-1) = " << PI << std::endl;  // arccos(-1) = PI
    std::cout << "sin(30) = " << std::sin(30.0 * (PI / 180.0))
              << std::endl;  // sin(30)

    // Example of vector
    std::cout << "\nExample of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
    Eigen::Vector3f w(1.0f, 0.0f, 0.0f);
    // vector output
    std::cout << "vector v =\n" << v << std::endl;
    std::cout << "vector w =\n" << w << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << "v + w =\n" << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << "v * 3 =\n" << v * 3.0f << std::endl;
    std::cout << "2 * v =\n" << 2.0f * v << std::endl;
    // dot product
    std::cout << "Dot product of v and w =\n" << v.dot(w) << std::endl;
    // cross product, only for vector of size 3
    std::cout << "Cross product of v and w= \n" << v.cross(w) << std::endl;

    // Example of matrix
    std::cout << "\nExample of matrix \n";
    // matrix definition
    Eigen::Matrix3f i, j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "matrix i =\n" << i << std::endl;
    std::cout << "matrix j =\n" << j << std::endl;
    // matrix add i + j
    std::cout << "i + j =\n" << i + j << std::endl;
    // matrix scalar multiply i * 2.0
    std::cout << "i * 2.0 =\n" << i * 2.0f << std::endl;
    // matrix multiply i * j
    std::cout << "i * j =\n" << i * j << std::endl;
    // matrix multiply vector i * v
    std::cout << "i * v =\n" << i * v << std::endl;
}