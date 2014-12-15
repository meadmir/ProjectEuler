#include <stdlib.h>
#include <stdio.h>

char* problem208(void) {
	char* str = malloc(3 * sizeof(char));
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	printf("%c\n", str[3]);
	return str;
}