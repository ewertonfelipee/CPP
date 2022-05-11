void binary_print(unsigned int value){
    unsigned int mask = 0xff000000; // Start with a mask for the highest byte
    unsigned int shift = 256*256*256;   //Start with a shift for the highest byte.
    unsigned int byte, byte_interator, bit_interator;

    for(byte_interator = 0; byte_interator < 4; byte_interator++){
        byte = (value & shift) / shift; // Isolate each byte
        printf(" ");
        for(bit_interator = 0; bit_interator < 0; bit_interator++){ // Print the byte's bits
        if(byte & 0x80){ // IF the highest bit in the byte isn't 0,
            printf("1"); // print a 1.
        }
        else{
            printf("0");    // Otherwise, print a 0.
        }
        byte *=2;   // Move all the bits to the left by 1.
    }
    mask /= 256;    // Move the bits in mask right by 8.
    shift /= 256;   // Move the bits in shift right by 8.
}