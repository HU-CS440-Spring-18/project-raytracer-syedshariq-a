#ifndef VIEWPLANE_H
#define VIEWPLANE_H

#include "Sampler.h"

class ViewPlane {
public:
    ViewPlane();
    ViewPlane(const int width, const int height, const float gamma);
    ~ViewPlane();

    void set_sampler(Sampler * sampler);
    const int get_n_samples() const;
public:
    int height, width;
    float gamma, inv_gamma;
    Sampler * sampler_ptr;

};

#endif 

