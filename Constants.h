#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>
#include <SDL.h>
#include <windows.h>
#include <SDL_image.h>
#include <SDL_ttf.h>


const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int SCREEN_BPP = 32;

static SDL_Renderer *renderer = NULL;
static SDL_Event *event;
static SDL_Window *window = NULL;

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;
const std::string WINDOW_TITLE = "Run Now";

#endif // CONSTANTS_H


