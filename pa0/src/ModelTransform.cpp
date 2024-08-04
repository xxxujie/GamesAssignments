#include <cmath>

#include "transform/ModelTransform.h"

Eigen::Vector3d RotateAndTranslate(const Eigen::Vector3d& point, double degree)
{
    double PI = std::acos(-1);
    Eigen::Matrix3d transMatrix{};
    transMatrix << std::cos(degree * (PI / 180.0f)), 0, 1, 0,
        std::sin(degree * (PI / 180.0f)), 2, 0, 0, 1;
    auto res = transMatrix * point;
    return res;
}
