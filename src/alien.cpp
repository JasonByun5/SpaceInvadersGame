#include "alien.hpp"


//made out here and to be static, because it will store the images from the disk into the porgram  
//instead of having to repeatedly call them back fromthe disk
Texture2D Alien::alienImages[3] = {};


Alien::Alien(int type, Vector2 position)
{
    //this initlizese the variables in the call into the constructor
    this -> type = type;
    this -> position = position;


    //checks if the images are initilized in the program
    if(alienImages[type -1].id == 0){

    switch(type) {
        case 1:
            alienImages[0] = LoadTexture("Graphics/alien_1.png");
            break;
        case 2:
            alienImages[1] = LoadTexture("Graphics/alien_2.png");
            break;
        case 3:
            alienImages[2] = LoadTexture("Graphics/alien_3.png");
            break;
        default:
            alienImages[0] = LoadTexture("Graphics/alien_1.png");
            break;    
    }
}
}

void Alien::Draw() {
    DrawTextureV(alienImages[type -1], position, WHITE);
}

int Alien::GetType(){
    return type;
}

void Alien::UnloadImages()
{
    for(int i = 0; i < 4; i++){
        UnloadTexture(alienImages[i]);
    }
}

Rectangle Alien::getRect()
{
    return {position.x, position.y, float(alienImages[type -1].width), float(alienImages[type -1].height)};
}

void Alien::Update(int direction){
    position.x += direction;
}