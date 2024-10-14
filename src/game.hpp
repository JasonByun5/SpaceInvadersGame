#pragma once
#include "spaceship.hpp"
#include "obstacle.hpp"
#include "alien.hpp"
#include "mysteryship.hpp"

class Game{
    public:
        Game();
        ~Game();
        void Draw();
        void Update();
        void HandleInput();
    private:
        void DeleteInactiveLasers();
        std::vector<Obstacle> CreateObstacles();
        std::vector<Alien> CreateAliens();
        void MoveAliens();
        void MoveDownAliens(int distance);
        void AlienShootLaser(); //chooses a random alien to shoot a laser from
        Spaceship spaceship;
        std::vector <Obstacle> obstacles;
        std::vector<Alien> aliens;
        int aliensDirection;
        std:: vector<Laser> alienLasers;
        constexpr static float alienLaserShootInterval = 0.35; //constexpr means that it will be initlized in the begin of 
                                                                //program without needing to initilize it in the constructor
        float timeLastAlienFired;
        MysteryShip mysteryship;
        float mysteryShipSpawnInterval;
        float timeLastSpawn;
};