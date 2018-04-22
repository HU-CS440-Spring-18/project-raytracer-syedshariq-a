#ifndef PHONG_H
#define PHONG_H

#include "Material.h"

class Phong : public Material {
public:
    Phong();
    Phong(const RGBColor& c, const float Kd, const float Ks, const float specular_e, const float light_color_inf);
    ~Phong();
    
    const virtual RGBColor shade(const ShadeRec& sr) const override;

protected:
    float Ka = 0.2;
    float Kd;
    float Ks;
    float specular_e;
    // light color influence when merging light color with obj. color. 
    // Which color is more important? 0 -> Pure object, 1 -> Pure light
    float light_color_inf;
};

#endif 

