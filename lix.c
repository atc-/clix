#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int numberOfWords(char *str);

int numberOfPeriods(char *str);

bool isPeriod(char c);

float lix(char *str);

/*
 * Expects a filename to parse as the one and only argument.
 */
int main(const int argc, const char *argv[]) {
	if (argc != 2) return -1;

	const char *filename = argv[1];
	
	FILE *fp;
	fp = fopen(filename, "r");

	if (fp != NULL) {
		printf("Opened %s\n", filename);
	}

	fclose(fp);

	return 0;
}

/*
 * Return a float value representing the LIX calculation for str.
 */
float lix(char *str) {
	printf("Parsing %s\n", str);
	return -1;
}

/*
 * Return true if c is . or ,
 */
bool isPeriod(char c) {
	return c == '.' || c == ',';
}

int numberOfPeriods(char *str) {
	printf("Counting periods in %s\n", str);
	return -1;
}

int numberOfWords(char *str) {
	printf("Counting words in %s\n", str);
	return -1;
}
