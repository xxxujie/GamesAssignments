#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

#include "transform/ModelTransform.h"

int main()
{
    Eigen::Vector3d point{2, 1, 1};
    auto res = RotateAndTranslate(point, 45.0);
    std::cout << res << std::endl;
    return 0;
}