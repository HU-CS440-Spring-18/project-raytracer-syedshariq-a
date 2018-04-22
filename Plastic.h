#ifndef PLASTIC_H
#define PLASTIC_H

#include "Phong.h"

class Plastic : public Phong {
public:
    Plastic();
    Plastic(const RGBColor& c, const float Kd = 0.4, const float Ks = 0.4, const float specular_e = 20, const float light_color_inf = 0.35);
    ~Plastic();
};

#endif 

