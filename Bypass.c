#include <stdafx.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void get_input(char* string, char* out)
{
	char buffer_1[5000];

	strcpy(buffer_1, string);
	strcpy(out, buffer_1);

	printf("Input received - Input reçu : %s\n", buffer_1);
}

int main(int argc, char const *argv[])
{
	char buffer_2[128];
	get_input(argv[1], buffer_2);

	return 0;
}