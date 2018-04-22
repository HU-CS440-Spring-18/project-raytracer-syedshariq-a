#ifndef METAL_H
#define METAL_H

# include "Phong.h"
class Metal : public Phong {
public:
    Metal();
    Metal(const RGBColor& c, const float Kd = 0.4, const float Ks = 0.4, const float specular_e = 100, const float lci = 0.001);
    ~Metal();
};

#endif 

