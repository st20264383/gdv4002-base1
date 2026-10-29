#include "Engine.h"


// Function prototypes


// Global Variables


int main(void) {

	// Initialise the engine (create window, setup OpenGL backend)
	int initResult = engineInit("GDV4002 - Applied Maths for Games", 1024, 1024);

	// If the engine initialisation failed report error and exit
	if (initResult != 0) {

		fprintf(stderr, "Cannot setup game window!!!\n");
		return initResult; // exit if setup failed
	}

	//
	// Setup game scene objects here
	//
	// hideAxisLines();
	
	addObject("Player", glm::vec2(0,0), 0, glm::vec2(0.8f,0.5f), "Resources\\Textures\\player1_ship.png", TextureProperties::NearestFilterTexture());
	GameObject2D* playerObject = getObject("Player");
	if (playerObject != nullptr)
	{
		//update player here
		playerObject 
	}
	
	//
	// Set callback functions
	//
	

	// Enter main loop - this handles update and render calls
	engineMainLoop();

	// When we quit (close window for example), clean up engine resources
	engineShutdown();

	// return success :)
	return 0;
}
