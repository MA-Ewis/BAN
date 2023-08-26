#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {0xAABBCCDD,0x11223344,0x55667788,0x99,0x10};
    void *ptr = arr;
    ptr++;
    printf("Addres = 0x%X\n",*(unsigned *)ptr++);
    printf("Addres = 0x%X\n",*(unsigned *)ptr);
    ptr = (unsigned int *)ptr++;
    printf("Addres = 0x%X\n",*(unsigned *)++ptr);
    return 0;
}
