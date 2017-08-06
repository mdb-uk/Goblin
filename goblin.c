#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char input[2048];
static char version[100] = "0.0.7";
static char lang_name[10] = "goblin";

//declare the function so we do not get warning about implicit dec
void outputIntro();

int main(int argc, char** argv) {
	
	outputIntro();

	while(1) 
	{
		//Print the prompt
		printf("\n%s> ", lang_name);

		//Wait for input
		fgets(input, 2048, stdin);
	
		//Clear newline character and replace will null terminator
		size_t length = strlen(input);
		if (input[length-1] == '\n')
			input[length-1] = '\0';
	
		//Check for keywords
		if (strcmp(input, "EXIT") == 0)
		{
			exit(0);
		}
		else if (strcmp(input, "HELP") == 0)
		{
			puts("");
			puts("N.B. commands are UPPER CASE");
			puts("");
			puts("EXIT - exits the goblin compiler");
			puts("HELP - this help page");
			puts("ECHO - echoes your command back to console");
			puts("	Parameters: <string>: the text to echo back");
		}
		else if(strstr(input, "ECHO ") != 0)
		{
			//const char* from = "12345678";
  			char *to = (char*) malloc(strlen(input));
  			//strncpy(to, from+2, 6);
			
			char *str = input;
			strncpy(to, input + 5, strlen(input)-4);
			//char *result = strstr(input, "echo");
			//int commandPosition = result - str;
			//int argStartPos = commandPosition + 4;
			//char *arg = s
			//printf("%i", argStartPos);
			printf("%s", to);
		}
		else if (strcmp(input, "VERSION") == 0)
		{
			printf("--- %s compiler version %s---", lang_name, version);
		}
		else 
		{
			//default case, unknown command
			printf("ERROR: Did not understand command: %s", input);
		}	
	}
	
	return 0;
}

void outputIntro()
{
	puts("");
	puts("----------------------------");
	printf("\nWelcome to %s compiler version %s \n", lang_name, version);
	puts("");
	puts("         /(.-""-.)\\        ");
	puts("    |\\  \\/      \\/  /|    ");
	puts("    | \\ / =.  .= \\ / |    ");
	puts("    \\( \\  O \\/ o  / )/    ");
	puts("     \\_, '-/  \\-' ,_/    ");
	puts("       /   \\__/   \\      ");
	puts("       \\,___/\\___,/      ");
	puts("     ___\\ \\|__|/ /___     ");
	puts("   /`    \\      /    `\\   ");
	puts("  /       '----'       \\    ");
	puts("\nEnter command 'HELP' for assistance");
	puts("----------------------------");
}
