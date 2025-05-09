#include "Renderer.hpp"
#include <stdexcept>

Renderer::Renderer(SDL_Window* window) {
    m_Context = SDL_GL_CreateContext(window);
    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK)
        throw std::runtime_error("GLEW failed to initialize!");
    glEnable(GL_DEPTH_TEST);
}

void Renderer::Clear() {
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Renderer::SwapBuffers() {
    SDL_GL_SwapWindow(SDL_GL_GetCurrentWindow());
}