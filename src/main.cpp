#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

int main(int argc, char *argv[]) {
	// Initialise SDL
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0 ) {
		cerr << "SDL Init Failed! Error: " << SDL_GetError() << endl;
	}
	
	SDL_Window* window = SDL_CreateWindow("Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
	if(!window) {
		cerr << "Failed to create a window! Error: " << SDL_GetError() << endl;
	}
	cout << "You got dysentary" << endl;
	
	// Create a surface for drawing
	SDL_Surface* windowSurface = SDL_GetWindowSurface( window );
	if ( !windowSurface ) {
		cout << "Error getting surface: " << SDL_GetError() << endl;
		system("pause");
		// End the program
		return 1;
	}

	// Do drawing
	SDL_UpdateWindowSurface(window);
	
	system("pause");
	
	// Draw a rectangle for testing
	SDL_FillRect( windowSurface, NULL, SDL_MapRGB( windowSurface->format, 255, 90, 120 ));
	
	SDL_DestroyWindow( window );
	window = NULL;
	windowSurface = NULL;
	
	return 0;
}