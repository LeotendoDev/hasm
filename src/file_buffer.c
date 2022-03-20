#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdbool.h>

#include "file_buffer.h"

void read_filesrc(char* src_path)
{
    bool exists = access(src_path, F_OK) == 0;
    if (!exists) {
        fprintf(stderr, "Source does not exist!");
        return;
    }

    FILE* src_file = fopen(src_path, "r");
    char buffer[BUFFER_CHUNK_CAP];

    fgets(buffer, BUFFER_CHUNK_CAP, (FILE*)src_file);

    fclose(src_file);

    printf("%s\n", buffer);
}
