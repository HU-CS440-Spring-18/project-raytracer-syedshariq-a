#ifndef ORTOGRAPHIC_H
#define ORTOGRAPHIC_H

#include "Camera.h"

class Orthographic: public Camera{
    public:
        Orthographic();
        Orthographic(const Point3D& eye, const Point3D& lookat);
        ~Orthographic();
        
        virtual Vector3D calculate_ray_dir(const Point2D& p) override;
        virtual void render_scene(World *world) override;
};


#endif 

