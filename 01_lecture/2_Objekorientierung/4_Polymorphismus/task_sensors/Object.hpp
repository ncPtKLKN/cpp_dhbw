#ifndef OBJECT_HPP_INCLUDED
#define OBJECT_HPP_INCLUDED


enum class Material
{
   metal,
   plastic
};



class Object
{
public:
   Object(double distance, Material material)
   : m_distance(distance)
   , m_material(material)
   {}

   ~Object()
   {}

   double getDistance();
   Material getMaterial();

private:
   double m_distance;
   Material m_material;
};


#endif // !OBJECT_HPP_INCLUDED