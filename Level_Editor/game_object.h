#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <GL/glew.h>
#include <glm/glm.hpp>

#include "texture.h"
#include "sprite_renderer.h"

class GameObject
{
public:
    // Object state
    glm::vec2   Position, Size, Saved_Pos, Velocity, Spawn, Movement;
    glm::vec3   Color;
    GLfloat     Rotation = 0.0f, Blink = 0.0f, blink_show = 0.0f, blink_hide = 0.0f;

    double Break = 0.0;
    bool   fall_through;
    bool   death;
    bool   boost;
    bool   less_gravity;
    bool   move;
    bool   SECRET = false;
    
    GLboolean   destroyed;
    Texture2D   Sprite;	
    GameObject(); 
    GameObject(glm::vec2 pos, glm::vec2 size, Texture2D sprite, glm::vec3 color = glm::vec3(1.0f), glm::vec2 movement = glm::vec2(0), glm::vec2 saved_pos = glm::vec2(0.0f),glm::vec2 velocity = glm::vec2(0.0f, 0.0f), GLfloat blink = 0.0f);
    virtual void Draw(SpriteRenderer &renderer);
};

#endif
