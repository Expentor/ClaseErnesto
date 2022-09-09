#include <stdio.h>
#include <stdlib.h>
#include <SSL/SDL.h>

#define WIDTH 640
#define HEIGHT 500

int main(){
	SDL_Window* window;
	SDL_Renderer* canvas;
	int status;
	//Iniciamos SDL
	status = SDL_Init();
	if (status != 0) {
		printf("SDL no pudo iniciarse :( \n");
		return status;
	}

	//Crear lienzo y ventana
	SDL_CreateWindow(
			window,
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			WIDTH,
			HEIGHT
			0
	);
	canvas = SDL_CreateRenderer(window, -1, 0);
	return 0;
}
