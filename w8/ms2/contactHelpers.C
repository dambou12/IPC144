/* -------------------------------------------
Name:TCHOUTEDJOUM DAMBOU SERGES
Student number:109240176
Email:stchoutatgoum@myseneca.ca
Section:10
Date:3/19/2018
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"
//#include "contacts.h"
// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

void pause(void) {
	printf("(Press Enter to Continue)");
	clearKeyboard();
      
}

// getInt: Empty function definition goes here:

int getInt(void) {
	int value;
	char NL;
	NL = 'x';
	while (NL !='\n'){
		scanf("%d%c", &value, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		  }
	
	} 
	return value;
}

// getIntInRange: Empty function definition goes here:
int getIntInRange(int num1, int num2) {
	int integer;
	int returnvalue=0;
	do 
	{
		integer = getInt(); 
		if ((integer >= num1) && (integer <= num2)) 
			returnvalue = 1;
		

		if( (integer < num1) || (integer > num2))
		
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ",num1,num2);
		
	} while (returnvalue==0);
	return integer;
}


// yes: Empty function definition goes here:
int yes(void) {
	char answer;
	char NL ;
	//int returnanswer;
	do {
		scanf("%c%c", &answer, &NL);
		if ((answer == 'Y' || answer == 'y') && (NL == '\n'))
			return 1;
		else{
			if ((answer == 'N' || answer == 'n') && (NL == '\n')){
				return 0;
			}
			else {
				//((answer != 'Y' || answer != 'y' || answer != 'N' || answer != 'n'))
				printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
				clearKeyboard();
			}
				
		}
			
	} while ((answer != 'Y' || answer != 'y' || answer != 'N' || answer != 'n'));
	return 0;
}



// menu: Empty function definition goes here:
int menu(void) {
	int option;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n\n");
	printf("Select an option:> ");
	
	option = getIntInRange(0, 6);
	printf("\n");
	return option;
}


// ContactManagerSystem: Empty function definition goes here:
void ContactManagerSystem(void) 
{
	
	int option;
	int answer=0;
	do
	{
		option = menu(); //prints menu
	       // printf("\n");
		switch (option) {
		case 1:
			printf("<<< Feature 1 is unavailable >>>\n\n");
		      //  clearKeyboard();
			pause();
			printf("\n");
			break;
		case 2:
			printf("<<< Feature 2 is unavailable >>>\n\n");
			clearKeyboard();
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			clearKeyboard();
			pause();
			printf("\n");
			break;
		case 4:
			printf("<<< Feature 4 is unavailable >>>\n\n");
			//clearKeyboard();
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			clearKeyboard();
			pause();
			printf("\n");
			break;
		case 6:
			printf("<<< Feature 6 is unavailable >>>\n\n");
		       // clearKeyboard();
			pause();
			printf("\n");
			break;
		default:
			printf("Exit the program? (Y)es/(N)o: ");
			answer = yes();
			//printf("\n");
			if (answer == 1) {
				printf("\n");
				printf("Contact Management System: terminated\n");
			}
			else   {
				printf("\n");
				option = 1;
			}
			
		}
		
	}while (option != 0 );
}
