#include <stdio.h>

int reads_from_file(char * szReadsPath) {

	FILE * fp;

	fp = fopen(szReadsPath,"r");
	if (fp == NULL) {
		printf("\nError opening file");
	} else {
            /*Here we will process the reads file */
            
            char buffer[128];
            while (!feof(fp)) {
                /*Process reads by blocks*/
                fread((void*)buffer,sizeof(char),128,fp);
                
            }            
            fclose(fp);
        }

	

	return 1;
}
