# include "Metal.h"
Metal::Metal()
        : Phong(){
    
}

Metal::Metal(const RGBColor& c, const float kd, const float ks, const float sp_e, const float lci)
        : Phong(c, ks, ks, sp_e, lci){

}