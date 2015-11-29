#include <stdio.h>

int tandem_mz_from_file(char * szTandemMzPath) {

	FILE * fp;

	fp = fopen(szTandemMzPath,"r");
	if (fp == NULL) {
		printf("\nError opening tandem mass spectromemtry file");
	}

	fclose(fp);

	return 1;
}
