#ifndef PERSPECTIVE_H
#define PERSPECTIVE_H

#include "Camera.h"

class Perspective: public Camera{
    public:
        Perspective();
        Perspective(const Point3D& eye, const Point3D& lookat, const float distance);
        ~Perspective();
        
        virtual Vector3D calculate_ray_dir(const Point2D& p) override;
        virtual void render_scene(World *world) override;
};


#endif 

