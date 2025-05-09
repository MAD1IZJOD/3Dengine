#include "Window.hpp"
#include <stdexcept>

Window::Window(int width, int height) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
        throw std::runtime_error("SDL failed to initialize!");

    m_Window = SDL_CreateWindow(
        "3D Engine",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        width, height,
        SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE
    );

    if (!m_Window)
        throw std::runtime_error("Failed to create window!");
}

Window::~Window() {
    SDL_DestroyWindow(m_Window);
    SDL_Quit();
}