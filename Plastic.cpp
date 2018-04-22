# include "Plastic.h"

Plastic::Plastic()
        : Phong(){
    
}

Plastic::Plastic(const RGBColor& c, const float kd, const float ks, const float sp_e, const float lci)
        : Phong(c, ks, ks, sp_e, lci){

}