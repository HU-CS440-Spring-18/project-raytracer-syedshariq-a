# include "Light.h"
#include "Ambient.h"

Light::Light(){
    
}

Light::Light(const float intensity, const RGBColor& color)
    : m_intensity(intensity), m_color(color) {
}

Light::~Light(){
    
}