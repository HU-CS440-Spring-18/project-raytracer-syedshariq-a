#ifndef CHALK_H
#define CHALK_H

# include "Phong.h"

class Chalk : public Phong {
public:
    Chalk();
    Chalk(const RGBColor& c, const float Kd = 0.4, const float Ks = 0.2, const float specular_e = 2, const float light_color_inf = 0.25);
    ~Chalk();
};

#endif 

