#ifndef GEOMETRYOBJECT_H
#define GEOMETRYOBJECT_H

#include "ShadeRec.h"
#include "RGBColor.h"
#include <limits>
class ShadeRec;
class GeometryObject {
public:
    GeometryObject();
    ~GeometryObject();

    virtual bool hit (const Ray &ray, double& tmin, ShadeRec& sr) = 0;
public:
    //TODO delete
    void setMaterial(Material* material) { m_material = material; }
protected:
    Material * m_material;

    const double kEpsilon = std::numeric_limits<double>::min();
};


#endif 

