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