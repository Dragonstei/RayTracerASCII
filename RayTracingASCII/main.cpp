/*
* Create coordinate system based on rows and columns
* Draw a ring which is semi-transparant
* Calculate brightness and change that to characters
* Print those characters on the screen
*
* All constants should be stored as such with their corresponding type
*/

// Includes
#include "settings.h"

/*
*							ASCII Grayscale
*  <-- Denser ----------------------------------------------- Sparser --> 
* "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\|()1{}[]?-_+~<>i!lI;:,"^`'. "
*/
const char palette[] = ".'`,^:\";~LCJUYXZO0Q";

int main()
{
	std::cout << "Initiating screen.\n";

	for (auto colour : palette) {
		std::cout << colour << "\n";
	}

	for (int paletteIndex = 0; paletteIndex < strlen(palette); paletteIndex++) {
		if (paletteIndex % 2 != 0) {
			std::cout << paletteIndex << ": " << palette[paletteIndex] << "\n";
		}
	}

	//grid(HEIGHT, WIDTH);

	return 0;
}

// Prints out amount of rows and columns of given window size as coordinates (starting top left)
// NEEDS TO START FROM CENTER OF SCREEN
void grid(int x, int y)
{
	int rows, columns;

	for (rows = 0; rows < x; rows++)
	{
		for (columns = 0; columns < y; columns++)
		{
			// Add 1 to rows and columns for offset as they start at 1 and not 0 (for users)
			std::cout << "(" << (rows + 1) << ", " << (columns + 1) << "), ";
		}
		std::cout << " \n";
	}
}