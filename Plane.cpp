#include "Plane.h"

Plane::Plane()
        : GeometryObject() {
}

Plane::Plane(const Point3D& p, const Normal& n){
    m_point = p;
    m_normal = n;
}

Plane::~Plane() {
}

bool Plane::hit (const Ray &ray, double& tmin, ShadeRec& sr) {
    const double t = (m_point - ray.o) * m_normal / (ray.d * m_normal);
    if (t > kEpsilon){
        tmin = t;
        sr.hit =  true;
        sr.hit_normal = m_normal;
        sr.hit_point = ray.o + t * ray.d;
        sr.material_ptr = m_material;
        sr.ray = ray;
        sr.obj_ptr = this;

        return true;
    }else {
        return false;
    }
};
