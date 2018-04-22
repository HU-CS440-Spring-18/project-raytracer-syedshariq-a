#ifndef SPHERE_H
#define SPHERE_H

#include "GeometryObject.h"
#include "Point3D.h"
#include "Vector3D.h"

class Sphere : public GeometryObject {
    public:
        Sphere();
        Sphere(const Point3D& center, const float radius);
        ~Sphere();
        
        virtual bool hit (const Ray &ray, double& tmin, ShadeRec& sr) override;
    private:
        Point3D m_center;
        float m_radius;
};


#endif 

