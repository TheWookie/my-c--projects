#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

using namespace std;

int main(int argc, char *args[]) {
    SDL_Window *window = NULL;
    SDL_Surface *screenSurface = NULL;
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        const char *error = SDL_GetError();
        printf("SDL_ERROR: %s%n", error);
        return 1;
    }


    return 0;
}