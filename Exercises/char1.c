#include <stdio.h>
#include <stdbool.h>

// verify if c is integer number between 0 and 9
bool digit(char c)
{   
    if((c >= '0') && (c <= '9')){
        return true;
    }
    else{
        return false;
    }
}
// verify if c is uppercase
char upper_case(char c)
{
    if((c >= 'a') && (c <= 'z')){
        c += 'A' - 'a'; // converts c to uppercase
    }
    return c;
}
// verify if c is uppercase or lowercase
int character(char c)
{
    if((c >= 65) && (c <= 90)){
        printf("uppercase\n");
    }
    else if((c >= 97) && (c <= 122)){
        printf("lowercase\n");
    }
    else{
        printf("Enter someone value between 65-90 and 97-122\n");
    }
}
void main()
{
    char c, upper, up_or_low_case;
    bool dig;
    scanf("%c", &c);
    dig = digit(c);
    upper = upper_case(c);
    up_or_low_case = character(c);
    printf("%d %c\n", dig, upper);
}