#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "hacking.h"

int main(int argc, char *argv[])
{
    int userid, usereid, fd; // fd = file descriptor
    char *datafile, *buffer;

    buffer = (char *)ec_malloc(100 * sizeof(char));
    datafile = (char *)ec_malloc(20 * sizeof(char));

    strcpy(datafile, "/var/notes");

    if (argc < 2) {
        usage(argv[0], datafile);
    }

    strcpy(buffer, argv[1]);

    printf("[DEBUG] buffer @ %p: \'%s'\n", buffer, buffer);
    printf("[DEBUG] datafile @ %p: \'%s'\n", datafile, datafile);

    fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
    if(fd == -1){
        fatal("in main() while opening data file");
    }
    printf("[DEBUG] file descriptor is %d\n", fd);

    userid = getuid();  // GET the real user id.
    usereid = geteuid();// Get the effective user id.

    if(write(fd, &userid, sizeof(int)) == -1){
        fatal("in main() while writing userid to file");
    }
    write(fd, "\n", 1); // terminate line

    if(write(fd, &usereid, sizeof(usereid)) == -1){
        fatal("in main() while writing usereid to file");
    }
    write(fd, "\n", 1); // terminate line

    if(write(fd, buffer, strlen(buffer)) == -1){
        fatal("in main() while writing buffer to file");
    }
    write(fd, "\n", 1); // terminate line

    if(close(fd) == -1){
        fatal("in main() while closing file descriptor");
    }
    printf("Note has been saved. \n");
    free(buffer);
    free(datafile);

    return 0;
}