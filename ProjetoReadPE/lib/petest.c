#include "petest.h"


bool petest_isPE(const unsigned char *b) // *b and b[] equals
{
    if(b[0] != 'd' || b[1] != 'f')
        return false;
    return true;
}