#include <stdio.h>

//Declare a static buffer for user input of maximum size 2048
static char input[2048];

int main(int argc, char** argv) {
	
	//Print Version and Exit information
	puts("stutter Version 0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");
	
	//Loop foreeeeeeeevveeeerrrrrr
	while(1) {
		//prompt output
		fputs("stutter> ", stdout);
		
		//Read a line of user input of max size 2048;
		fgets(input, 2048, stdin);
		
		//Print out prior input;
		printf("That was %s", input);
	}
	
	
	return 0;
	
}