#ifndef POINT_H
#define POINT_H
#include "Light.h"

class Point : public Light {
public:
    Point();
    Point(const Point3D& position, const float intensity, const RGBColor& color);
    
    virtual ~Point();
    virtual const float get_distance(const Point3D& point) const;
    virtual const Vector3D get_direction(const Point3D& surface_point) const override;
    const RGBColor get_color(const ShadeRec& sr) const override;
private:
    Point3D m_position;
};


#endif 

