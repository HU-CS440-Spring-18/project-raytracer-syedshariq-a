#include <iostream>
#include <string>
#include "World.h"

int main(int argc, char** argv) {
    World world = World();
    world.build_cornel_box();
    world.render_scene();
    world.save_image("output.bmp");
    
    return 0;
}

