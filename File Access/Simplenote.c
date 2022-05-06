#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

void usage(char *prog_name, char *filename)
{
    printf("Usage: %s <data to add to %s>\n", prog_name, filename);
    exit(0);
}

// A function to display an error message and then exit
void fatal(char *message)
{
    char error_massage[100];

    strcpy(error_massage, "[!!] Fatal Error ");
    strncat(error_massage, message, 83);
    perror(error_massage);
    exit(-1);
}

// An error-checked malloc() wrapper function
void *ec_malloc(size_t size)
{
    void *ptr = malloc(size);
    if(ptr == NULL){
        fatal("in ec_malloc on memory allocation");
    }
    return ptr;
}

int main(int argc, char **argv)
{
    int fd;                         // file discriptor
    char *buffer, *datafile;

    buffer = (char *)ec_malloc(100 * sizeof(char));
    datafile = (char *)ec_malloc(20 * sizeof(char));
    strcpy(datafile, "/tmp/notes");

    if(argc < 2){                   // If there aren't command-line arguments
        usage(argv[0], datafile);   // display usage message and exit
    }

    strcpy(buffer, argv[1]);        // Copy into the buffer.

    printf("[DEBUG] buffer @ %p: \'%s\'\n", buffer, buffer);
    printf("[DEBUG] datafile @ %p: \'%s\'\n", datafile, datafile);

    strncat(buffer, "\n", 1);       // Add a newline on the end.

// Opening file
    fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
    if(fd == -1){
        fatal("in main() while opening file");
    }
    printf("[DEBUG] file descriptor is %d\n", fd);

// Writing data
    if(write(fd, buffer, strlen(buffer)) == -1){
        fatal("in main() while writing buffer to file");
    }

// Closing file
    if(close(fd) == -1){
        fatal("in main() while closing file");
    }

    printf("Note has been saved.\n");
    free(buffer);
    free(datafile);

    return 0;
}