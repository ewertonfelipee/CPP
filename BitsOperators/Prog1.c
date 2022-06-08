// Print Unsigned Int
// Prog Convert Dec to bin
#include <stdio.h>
#include <limits.h>

void displayBits(unsigned value);

int main(void)
{
    unsigned x;

    printf("Enter unsigned int: ");
    scanf("%u", &x);

    displayBits(x);
    return 0;
}

void displayBits(unsigned value)
{
    unsigned c; // counter

    // declares displayBits and shift 31 bits to left
    // CHAR_BIT number of bits in a byte
    unsigned displayMask = 1 << CHAR_BIT * sizeof(unsigned) - 1;
    printf("%u = ", value);

    for(c = 1; c <= CHAR_BIT * sizeof(unsigned); c++){
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; // shift value to left at 1 | value = value << 1

        if(c % 8 == 0){
            putchar(' ');
        }
    }

    putchar('\n');
}