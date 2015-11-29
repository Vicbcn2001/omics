#include <stdio.h>

int reads_from_file(char * szReadsPath) {

	FILE * fp;

	fp = fopen(szReadsPath,"r");
	if (fp == NULL) {
		printf("\nError opening file");
	} else {
            /*Here we will process the reads file */
            
            char buffer[1024];
            while (!feof(fp)) {
                /*Process reads by blocks*/
                fread((void*)buffer,sizeof(char),1024,fp);
                
            }            
            fclose(fp);
        }

	

	return 1;
}
