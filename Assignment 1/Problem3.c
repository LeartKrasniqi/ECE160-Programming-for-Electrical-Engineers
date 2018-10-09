#include <stdio.h>

int main()
{
        long lng = 136792;              // Declaration of long variable

        for (int i = 0; i < sizeof(lng); ++i)
        {
                unsigned char *byte;
                byte = (unsigned char*)&lng;
                printf("Byte %d is %x in hex\n\n", i, *(byte + i));
        }
        return 0;
}
