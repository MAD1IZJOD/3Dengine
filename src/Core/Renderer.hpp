#pragma once
#include <GL/glew.h>
#include <SDL.h>
#include <assimp/scene.h>

class Renderer {
public:
    Renderer(SDL_Window* window);
    void Clear();
    void SwapBuffers();
private:
    SDL_GLContext m_Context;
};