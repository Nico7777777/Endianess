#include <stdio.h>
#include <limits.h>

int var = INT_MAX, highest_bit, lowest_bit, endianess;
int main() {
    highest_bit = var/2 + 1;
    lowest_bit = 1;

    endianess = highest_bit + lowest_bit;
    char memory_location = *(char *)&endianess;
    //transform adresa variabilei endianess intr-un pointer de tip char pe care il deferentiez ulterior
    // A B C D E F G H
    // |             |
    // |            highest_bit inseamna ca este Big Endian
    // lowest_bit inseamna ca este Little Endian
    if( (int)memory_location == lowest_bit)
        printf("Little Endian");
    else if( (int)memory_location == highest_bit)
        printf("Big Endian");
    return 0;
}
