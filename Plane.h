#ifndef PLANE_H
#define PLANE_H

#include "GeometryObject.h"
#include "Point3D.h"
#include "Vector3D.h"

class Plane : public GeometryObject {
public:
    Plane();
    Plane(const Point3D& p, const Normal& n);
    ~Plane();

    bool hit (const Ray &ray, double& tmin, ShadeRec& sr);
private:
    Point3D m_point;
    Normal m_normal;
        
};

#endif 

