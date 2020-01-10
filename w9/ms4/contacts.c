/* -------------------------------------------
Name:TCHOUTEDJOUM DAMBOU SERGES
Student number:109240176
Email:STCHOUTATGOUM@MYSENECA.CA
Section:11
Date:4/5/2018
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"
#include "contacts.h"
// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+



// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+

// getName:
void getName(struct Name *name) {
	char answer;
	printf("Please enter the contact's first name: ");
	scanf(" %[^\n]", (*name).firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	 answer = yes();
	 

	if (answer == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %s", (*name).middleInitial);
		clearKeyboard();
	}

	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", (*name).lastName);
	clearKeyboard();


}



// getAddress:

void getAddress(struct Address *address) {
	char answer=0;
	printf("Please enter the contact's street number: ");
	 (*address).streetNumber=getInt();
	
	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", (*address).street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");
	answer =yes();

	if (answer == 1) {
		printf("Please enter the contact's apartment number: ");
		(*address).apartmentNumber = getInt();
	}
	

		printf("Please enter the contact's postal code: ");
		scanf("%[^\n]%*c", (*address).postalCode);
		
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]", (*address).city);
	clearKeyboard();
}



// getNumbers:
// NOTE:  Also modify this function so the cell number is
//        mandatory (don't ask to enter the cell number)
void getNumbers(struct Numbers *numbers) {

	int answer;
	
	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(numbers->cell);
	
	//}

	printf("Do you want to enter a home phone number? (y or n): ");
	answer = yes();
	if (answer == 1)
	{
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(numbers->home);
		
	} 

	printf("Do you want to enter a business phone number? (y or n): ");
	answer = yes();
	
	if (answer == 1)
	{
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(numbers->business);
	 }
	//printf("Do you want to enter a home phone number? (y or n): ");
	//answer = yes();%10[^\n]
}
void getContact(struct Contact *contact) {
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);

}
