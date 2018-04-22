#ifndef AMBIENT_H
#define AMBIENT_H

#include "Light.h"
class Ambient : public Light {
public:
    Ambient();
    Ambient(const float intensity, const RGBColor& color);
    
    virtual ~Ambient();
    virtual const float get_distance(const Point3D& point) const;
    virtual const Vector3D get_direction(const Point3D& surface_point) const override;
    const RGBColor get_color(const ShadeRec& sr) const override;
        
};


#endif 

