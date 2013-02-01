#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numberOfWords(const char *str);

int numberOfPeriods(const char *str);

bool isPeriod(const char c);

float lix(const char *str);

void err(const char *msg, const int exitVal);

const int MAX_CHARS = 1000;

/*
 * Expects a filename to parse as the one and only argument.
 */
int main(const int argc, const char *argv[]) {
	if (argc != 2) err("Please provide a file name to parse", 255);
	
	/* the string we read in */
	char *buf = malloc(sizeof(char) * MAX_CHARS); // 1000 to start with
	const char *filename = argv[1];
	FILE *fp;
	fp = fopen(filename, "r");

	if (fp != NULL) {
		printf("Opened %s\n", filename);

		int i = 0, numPeriods = 0, numWords = 0, numLongWords = 0;

		while ((buf[i] = fgetc(fp)) != EOF && i <= MAX_CHARS) {
			if (isPeriod(buf[i])) numPeriods++;
			i++;
		}

		fclose(fp);

		printf("numWords = %d\n", numWords);
		printf("numPeriods = %d\n", numPeriods);
		printf("numLongWords = %d\n", numLongWords);

	} else {
		char *fmtStr = "Couldn't open %s\n";
		char *str = malloc(sizeof(char) * (strlen(fmtStr) + strlen(filename)));
		sprintf(str, fmtStr, filename);
		err(str, 254);  // str not free()'d
	}

	free(buf);

	return 0;
}

/*
 * Return a float value representing the LIX calculation for str.
 */
float lix(const char *str) {
	printf("Parsing %s\n", str);
	return -1;
}

/*
 * Return true if c is A-Z, a . or ,
 */
bool isPeriod(const char c) {
	return (c >= 65 && c <= 90) || c == '.' || c == ',';
}

int numberOfPeriods(const char *str) {
	printf("Counting periods in %s\n", str);
	return -1;
}

int numberOfWords(const char *str) {
	printf("Counting words in %s\n", str);
	return -1;
}

void err(const char *msg, const int exitVal) {
	printf("%s\n", msg);
	exit(exitVal);
}
