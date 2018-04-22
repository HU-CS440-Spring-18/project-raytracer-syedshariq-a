#ifndef MATERIAL_H
#define MATERIAL_H
class ShadeRec;
class RGBColor;
#include "RGBColor.h"
class Material {
public:
    Material();
    Material(const RGBColor& c);
    ~Material();

    const virtual RGBColor shade(const ShadeRec& sr) const = 0;

public:
    RGBColor color;
};


#endif 

