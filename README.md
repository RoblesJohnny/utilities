# utilities
C utility functions for different purposes like
* File manipulation

## Includes the following functions
1. futils_file_mem_load(char *path);

## futils_file_mem_load(char *path);
Loads a file to a buffer in memory to allow further manipulation.
**WARNING** the caller MUST free the returned pointer to avoid leaks.