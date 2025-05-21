#include "Core/Window.hpp"
#include "Core/Renderer.hpp"
#include <SDL.h>

int main() {
    Window window(1280, 720);
    Renderer renderer(window.GetSDLWindow());

    bool running = true;
    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT)
                running = false;
        }
 
        renderer.Clear();
        // Add rendering logic here
        renderer.SwapBuffers();
    }

    return 0;
}
