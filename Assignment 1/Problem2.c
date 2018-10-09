#include <stdio.h>

int main()
{
        long ar[10] = {31,32,33,34,35,36,37,38,39,40};         
        long *ptr;          // ptr is a pointer to a long
        ptr = &ar[3];       // sets pointer to the address of element with index 3

        printf("The address of the zeroth element is %x\n\n", &ar[0]);        // %x prints it in hex
        printf("The address of the third element is %x\n\n", &ar[2]);
        printf("The address of ptr is %x\n\n", &ptr);
        printf("The address held in ptr is %x\n\n", ptr);
        printf("The contents of ar[3] are %lu\n\n", ar[3]);
        printf("The contents of the address held in ptr are %lu\n\n", *ptr);
        printf("Based on Part A and Part B, the size of a long is Eight Bytes\n\n");
	      printf("Just to be sure, C tells me the size of a long is %d\n\n", sizeof(ar[0])); 
        return 0;
}

