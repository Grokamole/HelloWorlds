#include <iostream>
#include <cstdlib>

/** Displays Hello World! to standard output.
*/
void DisplayHelloWorld()
{
	std::cout << "Hello World!";
}

/** This main function makes a call to DisplayHelloWorld

@param argc The number of commandline arguments.
@param argv The array of commandline arguments.

@return Always returns EXIT_SUCCESS.
*/
int main(int argc, char ** argv)
{
	DisplayHelloWorld();
	return EXIT_SUCCESS;
}
