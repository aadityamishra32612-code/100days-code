#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;

	printf("Enter a single character: ");
	if (scanf(" %c", &ch) != 1) {
		fprintf(stderr, "Failed to read input.\n");
		return 1;
	}

	if (isupper((unsigned char)ch)) {
		printf("'%c' is an uppercase alphabet.\n", ch);
	} else if (islower((unsigned char)ch)) {
		printf("'%c' is a lowercase alphabet.\n", ch);
	} else if (isdigit((unsigned char)ch)) {
		printf("'%c' is a digit.\n", ch);
	} else {
		printf("'%c' is a special character.\n", ch);
	}

	return 0;
}

