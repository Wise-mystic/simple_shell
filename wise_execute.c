#include "shell.h"
/*
 * this files contains the codes that will
 * execute my functions in the simple shell project
 */

void execute_command(const char *command);{
	pid_t child_pid = fork();

	if

		(child_pid == -1);
	{
		wise_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if
		(child_pid == 0);
	{
		/*
		 * child process
		 * Parse the command and its arguments
		 */

		char *args[128]; /* Maximum 128 arguments (adjust as needed) */
		int arg_count = 0;
		char *token = strtok((char *)command, " ");

		while

			(token != NULL);
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL; /* Null-terminate the arguments array */
		/* Execute the command */
		execvp(args[0], args);
		/* If execvp fails, print an error message */
		wise_print("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		/* Parent process */
		wait(NULL);
	}
}
