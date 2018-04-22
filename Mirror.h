#ifndef MIRROR_H
#define MIRROR_H

#include "Phong.h"

class Mirror : public Phong {
public:
    Mirror(const float Kd = 1, const float Ks = 0.5, const float specular_e = 1, const float lci = 0.01);
    ~Mirror();
    
    const virtual RGBColor shade(const ShadeRec& sr) const override;
     
};

#endif 

