#ifndef WORLD_H
#define WORLD_H

#include "ViewPlane.h"
#include "RGBColor.h"
#include "GeometryObject.h"
#include <vector>
#include "MultiTracer.h"
#include <string>
#include "Camera.h"
#include "Light.h"

class Camera;

class World {
public:
    std::vector<RGBColor> m_pixels;
    std::vector<GeometryObject*> m_objects;
    std::vector<Light*> m_lights;
    Light * m_ambient;
    ViewPlane m_vp;
    Tracer * m_tracer_ptr;
    Camera * m_camera_ptr;

    const RGBColor BACKGROUND_COLOR = RGBColor(0,0,0);

public:
    World();
    ~World();

    void add_object(GeometryObject* obj);
    void add_light(Light* light);
    void set_ambient(Light * light);

    void build_cornel_box();
    void render_scene();
    const ShadeRec hit_bare_bones_obj(const Ray& ray, const std::vector<GeometryObject*> ignore = std::vector<GeometryObject*>());


    void open_window(const int hres, const int vres) const;
    void display_pixel(const int row, const int column, const RGBColor& pixel_color);

    void save_image(const std::string& outputFile) const;
};


#endif 

