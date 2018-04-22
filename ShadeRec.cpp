#include "Constants.h"
#include "ShadeRec.h"

// ------------------------------------------------------------------ constructor

ShadeRec::ShadeRec(const World& wr)
        : 	hit_an_object(false),
        hit_point(),
        local_hit_point(),
        normal(),
        ray(),
        depth(0),
        color(BLACK),
        t(0.0),
        u(0.0),
        v(0.0),
        w(wr) {}


// ------------------------------------------------------------------ copy constructor

ShadeRec::ShadeRec(const ShadeRec& sr)
        : 	hit_an_object(sr.hit_an_object),
        material_ptr(sr.material_ptr),
        hit_point(sr.hit_point),
        local_hit_point(sr.local_hit_point),
        normal(sr.normal),
        ray(sr.ray),
        depth(sr.depth),
        color(sr.color),
        t(sr.t),
        u(sr.u),
        v(sr.v),
        w(sr.w) {}


ShadeRec::~ShadeRec() {}




