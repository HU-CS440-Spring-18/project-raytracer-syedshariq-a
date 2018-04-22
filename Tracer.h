#ifndef TRACER_H
#define TRACER_H

#include "World.h"
#include "RGBColor.h"
#include "Ray.h"
class Tracer {
public:
    Tracer();
    Tracer(World * world_ptr);

    virtual const RGBColor trace_ray(const Ray& ray, const std::vector<GeometryObject*> ignore = std::vector<GeometryObject*>(), const int depth = 0) const = 0;

protected:
    World* m_world_ptr;
};


#endif 

