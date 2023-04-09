#include "futils.h"

//Loads a file received as a parameter into a buffer in memory
//Warning: Caller must free the returned pointer
char *futils_file_mem_load(char *path)
{
    FILE *file;
    size_t file_size;
    char *buffer;

    file = fopen(path, "r");
    if (!file)
    {
        perror(path);
        return NULL;
    }

    // Calculates the file size to allocate the memory later
    fseek(file, 0L, SEEK_END);
    file_size = ftell(file);
    rewind(file);

    // allocate memory for the buffer
    buffer = malloc(file_size + 1);
    if (!buffer)
    {
        fclose(file);
        perror("malloc failed");
        return NULL;
    }

    if (fread(buffer, file_size, 1, file) != 1)
    {
        fclose(file);
        free(buffer);
        perror("buffer read fails");
        return NULL;
    }

    fclose(file);

    return buffer;
}