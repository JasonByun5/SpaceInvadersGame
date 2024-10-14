#pragma once
#include <raylib.h>

class Laser {
    public:
        Laser(Vector2 position, int speed);
        void Update();
        void Draw();
        bool active;
        Rectangle getRect();
    private:
        Vector2 position; // need to know the postion so you can tell if it collides or not
        int speed;  //know how fast it it moving
};