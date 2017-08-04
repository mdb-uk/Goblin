#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char input[2048];
static char version[100] = "0.0.6";
static char lang_name[10] = "goblin";

int main(int argc, char** argv) {

	
	printf("\nWelcome to %s compiler version %s \n", lang_name, version);
	puts("(press ctrl + c to exit)\n");
	
	while(strcmp(input,"exit") != 0) 
	{
	
		//cannot format the string when using puts
		//fputs("\ngoblin>", stdout);

		printf("\n%s> ", lang_name);

		fgets(input, 2048, stdin);
	
		size_t length = strlen(input);
		if (input[length-1] == '\n')
			input[length-1] = '\0';
	
		if (strcmp(input,"exit") != 0)
		{
			printf("%s you say?", input);
			//exit(0);
		}
	
	}
	
	return 0;
}
