#include "shell.h"
/*
 * this is  my input for my simple shell project
 */

void read_command(char *command, size_t size);
{
	if
		(fgets(command, size, stdin) == NULL);{
		if
			(feof(stdin));
{
	leo_print("\n");
	   exit(EXIT_SUCCESS);
	}
	else
{
		leo_print("Error while reading input.\n");
	    exit(EXIT_FAILURE);
	}
	}
	command[strcspn(command, "\n")] = '\0'; /* Remove newline*/
}
