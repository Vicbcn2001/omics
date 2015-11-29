#include <stdio.h>

int reads_from_file(char * szReadsPath) {

	FILE * fp;

	fp = fopen(szReadsPath,"r");
	if (fp == NULL) {
		printf("\nError opening file");
	} else {
            /*Here we will process the reads file */
	    char * buffer = NULL;
	    while (!fp) {
		fread((void*)buffer,1,100,fp);
	    }
            
            fclose(fp);
        }

	return 1;
}
