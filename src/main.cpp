#include <iostream>
#include <SDL2/SDL.h>

int main(int argc, char const *argv[])
{
	SDL_Window * window;

	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow("Title",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640,
		480,
		0);
	if(window == NULL){
		std::cout << "Couldn't create window: " << SDL_GetError() << std::endl;
		return 1;
	}

	//Temp
	SDL_Delay(3000);
	SDL_DestroyWindow(window);

	SDL_Quit();
	return 0;
}
