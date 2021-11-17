#include <iostream>

using namespace std;

struct pointertoStructs {

    int x;
    int y;
    int z;
};

void takers(pointertoStructs* pp)
{
    cin >> pp->x >> pp->y >> pp->z;
}

void print(pointertoStructs* pp)
{
    cout << pp->x << ", " << pp->y << ", " << pp->z << endl;
    cout << &pp->x << ", " << &pp->y << ", " << &pp->z << endl;
}

int main(void)
{
    // object on heap
    pointertoStructs *p = new pointertoStructs; // struct single allocated dynamically
    // and stored the address of the allocated area at p
    takers(p);
    print(p);

    /* Created other object, but pp don't is a pointer
    For call a funcs below that alterates this object way pointers
    we needed sends the memory address of pp */
    pointertoStructs pp;
    takers(&pp);
    print(&pp);

    delete(p);

    return 0;
}