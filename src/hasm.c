#include <stdio.h>
#include <stdlib.h>

#include "file_buffer.h"

void usage(int err) 
{
    FILE* dest = err ? stderr : stdout;
    
    fprintf(dest, "Usage: hasm [option] [file]\n");
    fprintf(dest, "-I   set default include directory\n");
    fprintf(dest, "-v   shows you your version of HASM\n");
    fprintf(dest, "-h   shows you this helpmap\n");

    exit(err ? -1 : 0);
}

int main(int argc, char** argv) 
{
    read_filesrc("examples/test.hasm");
    usage(1);
    return 0;
}
