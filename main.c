#include <stdio.h>
#include <stdlib.h>
#include <histedit.h>

#include <editline/readline.h>

int main(int argc, char** argv) {
	
	//Print Version and Exit information
	puts("stutter Version 0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");
	
	//Loop foreeeeeeeevveeeerrrrrr
	while(1) {
		//print prompt and retrieve user input
		char* input = readline("stutter> ");
		
		//Add user input to history
		add_history(input);
		
		//Read a line of user input of max size 2048;
		printf("Yeah, that was %s\n",input);
		
		//Print out prior input;
		printf("That was %s", input);
		
		//release input's memory
		free(input);
		
	}
	
	
	return 0;
	
}