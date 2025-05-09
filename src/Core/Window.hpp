#pragma once
#include <SDL.h>

class Window {
public:
    Window(int width, int height);
    ~Window();
    SDL_Window* GetSDLWindow() const { return m_Window; }
private:
    SDL_Window* m_Window;
};