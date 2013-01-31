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
		print ("Opened %s\n", filename);
	}

	return 0;
}

/*
 * Return a float value representing the LIX calculation for str.
 */
float lix(char *str) {
	return -1;
}

bool isPeriod(char c) {
	return false;
}

int numberOfPeriods(char *str) {
	return -1;
}

int numberOfWords(char *str) {
	return -1;
}
