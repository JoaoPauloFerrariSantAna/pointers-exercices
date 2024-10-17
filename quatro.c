#include <stdio.h>

#define END_OF_STRING 0

int main() {
	/* strings are nothing more than than a array of chars */
	const char* greetings = "Hello!";

	/* PT1: word has what greetings has */
	/* PT2: while current word is not the end of the string (\0) */
	/* PT3: go to the next word */
	for(const char * word = greetings; (*word) != END_OF_STRING; word++) {
		/* PT4: show the current word */
		printf("%c ", (*word));
	}

	printf("\n");

	return 0;
}
