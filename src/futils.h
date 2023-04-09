#ifndef _FUTISL_H_
#define _FUTISL_H_
#include <stdio.h>
#include <stdlib.h>

//Loads a file received as a parameter into a buffer in memory
//Warning: Caller must free the returned pointer
char *futils_file_mem_load(char *path);

#endif