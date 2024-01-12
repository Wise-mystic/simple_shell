#ifndef SHELL_H
#define SHELL_H
/*
 *The headers 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/*
 *the voids i used in this shell project
 */
void display_prompt(void);
void wise_print(const char *my_printf);
void read_command(char *command, size_t size);
void execute_command(const char *command);




#endif /* SHELL_H */
