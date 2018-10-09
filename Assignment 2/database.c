#include <stdio.h>
#include <stdlib.h>

struct recordInfo {
	char lastName[30];
	char firstName[35];	// Holds both First and Middle names
	float salary;
	int yearHired;
} recordInfo = {"\0", "\0", -1.0, -1};

int main()
{
	FILE *fptr;		// Declares pointer to file
	int recNum;		// Record Number
	int choice;
	int ctr;		// Counter variable
	struct recordInfo record[20];
	do {	
		printf("\nWHat would you like to do?\n");
		printf("(1) Display Records\n");
		printf("(2) Modify Records\n");
		printf("(3) Save Records\n");
		printf("(4) Retrieve Records\n");
		printf("(5) Exit\n");
		scanf(" %d", &choice);

		switch (choice)
		{
			case (1): printf("\nEnter Record Number (0-19) :\n");
			  	  scanf(" %d", &recNum);
				  printf("\nName: %s, %s\nSalary: %.2f\nYear Hired: %d\n", record[recNum].lastName, record[recNum].firstName, record[recNum].salary, record[recNum].yearHired);
				  break;
			case (2): printf("\nEnter Record Number to Modify (0-19) :\n");
				  scanf(" %d", &recNum);
				  printf("\nWhat is the last name of the employee?\n");
				  scanf(" %s", record[recNum].lastName);
				  printf("\nWhat is the first name of the employee?\n");
                                  scanf(" %s", record[recNum].firstName);
				  printf("\nWhat is the employee's salary?\n");
				  scanf(" %f", &record[recNum].salary);
				  printf("\nWhen was the employee hired?\n");
				  scanf(" %d", &record[recNum].yearHired);
				  break;
			case (3): fptr = fopen("company.db", "wb");
                                  if (fptr == 0)
                                  {
                                        printf("Error - File could not be opened.\n");
                                        exit (1);
                                  }
                                  fwrite(record, sizeof(char), sizeof(record), fptr);
                                  fclose(fptr);
                                  break;
			case (4): fptr = fopen("company.db", "rb");
                                  if (fptr == 0)
                                  {
                                        printf("Error - File could not be opened.\n");
                                        exit (1);
                                  }
                                  fread(record, sizeof(char), sizeof(record), fptr);
                                  fclose(fptr);
                                  break;

			case (5): exit(1);
			default: printf("\n%d is not a valid choice.\nTry again.\n", choice);
				 break;
		}
 

	} while (choice != 5);
	
	return 0;
