#ifndef FLAT_H
#define FLAT_H

#include "Material.h"
class Flat : public Material {
public:
    Flat();
    Flat(const RGBColor& c);
    ~Flat();
    
    const virtual RGBColor shade(const ShadeRec& sr) const override;

};

#endif 

