#include <stdio.h>
#include <time.h>

void dump_time_struct_bytes(struct tm *time_ptr, int size)
{
    int i;
    unsigned char *raw_ptr;

    printf("bytes of struct located at 0x%08x\n", time_ptr);
    raw_ptr = (unsigned char*) time_ptr;
    for(i = 0; i < size; i++){
        printf("%02x ", raw_ptr[i]);
        if(i%16 == 15)  //  Print a newline every 16 bytes.
            printf("\n");
    }
    printf("\n");
}

int main(){
    long int seconds_since_epoch;
    struct tm *time_ptr, current_time;
    int day, month, year, hour, minute, second, i, *int_ptr;

    seconds_since_epoch = time(0);  //  Pass time a null pointer as argument.
    printf("time() - seconds since epoch: %ld\n", seconds_since_epoch);

    time_ptr = &current_time;

    localtime_r(&seconds_since_epoch, time_ptr);

    day = time_ptr -> tm_mday;
    month = (time_ptr -> tm_mon) + 1;
    year = (time_ptr -> tm_year) + 1900;
    hour = current_time.tm_hour;
    minute = time_ptr -> tm_min;
    second = *((int *) time_ptr);

    printf("Current data is: %02d/%02d/%02d\n", day, month, year);
    printf("Current time is: %02d:%02d:%02d\n", hour, minute, second);

    dump_time_struct_bytes(time_ptr, sizeof(struct tm));

    minute = hour = 0;
    int_ptr = (int *) time_ptr;

    for(i=0; i < 3; i++) {
        printf("int_ptr @ 0x%08x : %d\n", int_ptr, *int_ptr);
        int_ptr++; // Adding 1 to int_ptr adds 4 to the address,
    }
}