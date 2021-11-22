#include <stdio.h>
#include <time.h>

int main()
{
    time_t rawtime;
    struct tm* timeinfo;

    time (&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Hora e Data local atual: %s", asctime(timeinfo));

    return 0;
}