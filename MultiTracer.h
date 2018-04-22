#ifndef MULTITRACER_H
#define MULTITRACER_H

#include "Tracer.h"

class MultiTracer : public Tracer {
public:
    MultiTracer();
    MultiTracer(World* world_ptr);

    virtual const RGBColor trace_ray(const Ray& ray, const std::vector<GeometryObject*> ignore = std::vector<GeometryObject*>(), const int depth = 2) const override;
private:
    const float trace_shadow_ray(const ShadeRec& sr) const;
        
};


#endif 

