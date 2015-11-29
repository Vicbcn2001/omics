#include <stdio.h>

int reads_from_file(char * szReadsPath) {

	FILE * fp;

	fp = fopen(szReadsPath,"r");
	if (fp == NULL) {
		printf("\nError opening file");
	}

	fclose(fp);

	return 1;
}
