#include <SDL2/SDL_events.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<SDL2/SDL.h>
#include<SDL2/SDL_ttf.h>


#define WIDTH 640
#define HEIGHT 500

int main(){
	SDL_Window* window;
	SDL_Renderer* canvas;
	TFF_Font* font; 
	char* cadena = "Hola mundo!";
	int status;
	bool running= true;

	status = SDL_Init(0);
	if(status != 0){
		printf("No se pudo iniciar sdl: %s\n", SDL_GetError());
		return status;
	}
	if(TTF_Init() != 0){
		printf("No se pudo iniciar TTF: %s\n", SDL_GetError());
		return status;
	}

	window = SDL_CreateWindow(
		"Hola mundo",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WIDTH,
		HEIGHT,
		0
	);

	canvas = SDL_CreateRenderer(window, -1, 0);
	if(canvas==NULL){
		printf("No se pudo crear el renderer: %s\n", SDL_GetError());
		return 1;
	}

	while(running){
		SDL_Event e;
		while (SDL_PollEvent(&e)){
			switch (e.type){
				case SDL_QUIT:
					running = false;
					break;
			}
		}
		SDL_Surface* text_rendered = TTF_RenderText_Blended(font, cadena, foreground);
		SDL_Texture* text_texture = SDL_CreateTextureFromSurface(canvas, text_rendered)
		SDL_SetRenderDrawColor(canvas, 255, 255, 255, 255);
		SDL_RenderClear(canvas);
		SDL_RenderCopy(canvas, text_texture, NULL, NULL);
		SDL_RenderPresent(canvas);

	}
	SDL_DestroyRenderer(canvas);
	SDL_DestroyWindow(window);

	TTF_Quit();
	SDL_Quit();
	return 0;
}

