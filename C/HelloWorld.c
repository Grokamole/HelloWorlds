#include <stdio.h>
#include <stdlib.h>

/** Displays Hello World to the output.
*/
void HelloWorld()
{
	printf("Hello World!");
}

/** This main function calls the function to display Hello World.

@param[in] argc the number of command line arguments
@param[in] argv the array of command line argument strings
@return always returns EXIT_SUCCESS
*/
int main(int argc, char ** argv)
{
	HelloWorld();
	return EXIT_SUCCESS;
}