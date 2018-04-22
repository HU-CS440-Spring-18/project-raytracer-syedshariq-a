#ifndef LIGHT_H
#define LIGHT_H

#include "Point3D.h"
#include "Vector3D.h"
#include "RGBColor.h"
#include "ShadeRec.h"

class Light {
public:
    Light();
    Light(const float intensity, const RGBColor& color);

    virtual ~Light();
    virtual const float get_distance(const Point3D& point) const = 0;
    virtual const Vector3D get_direction(const Point3D& surface_point) const = 0;
    virtual const RGBColor get_color(const ShadeRec& sr) const = 0;
protected:
    float m_intensity;
    RGBColor m_color;
};

#endif 

