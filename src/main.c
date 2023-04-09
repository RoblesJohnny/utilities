/*
Test file for futils library
*/

#include "futils.h"

int main()
{
    char *path = "/Users/johnny/cloud-config.yaml";
    char *buffer = futils_file_mem_load(path);
    if (buffer == NULL)
    {
        perror(buffer);
        return EXIT_FAILURE;
    }
    else
    {
        printf("%s\n", buffer);
        free(buffer);
    }

    return EXIT_SUCCESS;
}