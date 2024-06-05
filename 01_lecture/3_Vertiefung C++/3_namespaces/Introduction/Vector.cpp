#include "Vector.hpp"
#include <cmath> // For sqrt

namespace Geometric
{ //begin of namespace Geometric

vector::vector(double xCoord, double yCoord)
: x(xCoord)
, y(yCoord)
{}


double vector::magnitude() const {
    return std::sqrt(x * x + y * y);
}



} //end of namespace Geometric