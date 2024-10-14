#pragma once
#include <vector>
#include "block.hpp"

class Obstacle {
    public:
        Obstacle(Vector2 position);
        void Draw();
        Vector2 position;
        std::vector<Block> blocks;
        static std::vector<std::vector<int>> grid;
        // static helps so that you can call this number without making a obstacle object (in game.cpp)
    private:

};