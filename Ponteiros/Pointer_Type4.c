#include <stdio.h>

int main()
{
    int i;
    char char_array[] = {'a', 'b'};
    int int_array[] = {1, 2};

    void *void_pointer;

    void_pointer = (void *) char_array;

    for(i = 0; i <= 1; i++){
        printf("[char pointer] points to %p, which contains the char '%c'\n", 
            void_pointer, *((char *) void_pointer));
        void_pointer = (void*) ((char*)void_pointer + 1);
    }

    void_pointer = (void *) int_array;

    for(i = 0; i <= 1; i++){
        printf("[int pointer] points to %p, which contains the %d\n", void_pointer, *((int*)void_pointer));
        void_pointer = (void*) ((int*)void_pointer + 1);
    }

    return 0;
}