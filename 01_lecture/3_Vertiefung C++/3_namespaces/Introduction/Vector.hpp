#ifndef VECTOR_HPP
#define VECTOR_HPP

namespace Geometric
{//begin of namespace Geometric

class vector
{
private:
    double x;
    double y;

public:
    vector(double xCoord, double yCoord);
    double magnitude() const;
};

} //end of namespace Geometric

#endif // VECTOR_HPP