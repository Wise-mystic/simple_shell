#include "shell.h"

/*
 * This is my own printf function
 */

void wise_print(const char *message);
{
write(STDOUT_FILENO, message, strlen(message));
}
