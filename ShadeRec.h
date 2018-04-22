#ifndef __SHADE_REC__
#define __SHADE_REC__

class Material;
class World;

#include "Point3D.h"
#include "Normal.h"
#include "Ray.h"
#include "RGBColor.h"

#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<Material> MaterialPtr;

class ShadeRec {
public:

    bool				hit_an_object;		// did the ray hit an object?
    MaterialPtr 		material_ptr;		// pointer to the nearest object's material
    Point3D 			hit_point;			// world coordinates of intersection
    Point3D				local_hit_point;	// world coordinates of hit point on untransformed object (used for texture transformations)
    Normal				normal;				// normal at hit point
    Ray					ray;				// required for specular highlights and area lights
    int					depth;				// recursion depth
    RGBColor			color;				// used in the Chapter 3 only
    double				t;					// ray parameter
    float				u;					// texture coordinate
    float				v;					// texture coordinate
    const World&				w;					// world reference

    ShadeRec(const World& wr);
    ShadeRec(const ShadeRec& sr);
    ~ShadeRec();
};

#endif
