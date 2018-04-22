# include "Flat.h"

Flat::Flat()
        : Material(){
    
}

Flat::Flat(const RGBColor& c)
        : Material(c){
    
}

const RGBColor Flat::shade(const ShadeRec& sr) const {
    return color;
}