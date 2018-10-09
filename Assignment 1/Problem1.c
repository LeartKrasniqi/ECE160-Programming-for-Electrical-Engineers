#include <stdio.h>

int main()
{
	char ar[10];         // Sets up character array 
	ar[0] = 20;
	ar[1] = 21;
	ar[2] = 22;
	ar[3] = 23;
	ar[4] = 24;
	ar[5] = 25;
	ar[6] = 26;
	ar[7] = 27;
	ar[8] = 28;
	ar[9] = 29;
	char *ptr;	    // ptr is a pointer to a character
	ptr = &ar[3];	    // sets pointer to the address of element with index 3	

	printf("The address of the zeroth element is %x\n\n", &ar[0]);        // %x prints it in hex
	printf("The address of the third element is %x\n\n", &ar[2]);
	printf("The address of ptr is %x\n\n", &ptr);
	printf("The address held in ptr is %x\n\n", ptr);
	printf("The contents of ar[3] are %d\n\n", ar[3]);
	printf("The contents of the address held in ptr are %d\n\n", *ptr);
	printf("Based on Part A and Part B, the size of a char is One Byte\n\n");
	printf("Just to be sure, C tells me the size of a char is %d\n\n", sizeof(ar[0]));
	return 0; 
}
