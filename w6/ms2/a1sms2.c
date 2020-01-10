/* -------------------------------------------
Name:tchoutedjoum dambou
Student number:109240176
Email:stchoutatgoum@myseneca.ca
Section:8
Date:03/06/2018
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"
// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


int main(void)
{
	// Declare variables here:
	char answer;
	struct Name N = { " "," "," " };
	struct Address A = {0," ",0," "," "};
	struct Numbers Num = { " "," "," " };

	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Contact Name Input:	
	//answer = ';
	printf("Please enter the contact's first name: ");
	scanf("%s", N.firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &answer);  	

	      if (answer =='y'||answer=='Y') {
	          printf("Please enter the contact's middle initial(s): ");
	          scanf("%s", N.middleInitial);
           }
	 
    printf("Please enter the contact's last name: ");
	scanf("%s", N.lastName);
	     

	// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%d", &A.streetNumnber);
	printf("Please enter the contact's street name: ");
	scanf("%s", A.street); 

	printf("Do you want to enter an appartment number? (y or n): ");
	scanf(" %c", &answer);

	     if (answer =='y'|| answer=='Y'){
			 printf("Please enter the contact's appartment number: ");
	         scanf("%d%*c", &A.apartmentNumber);
         }

	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]%*c", A.postalCode);		
	printf("Please enter the contact's city: ");
	scanf("%[^\n]", A.city); 


	// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &answer);

	     if (answer =='y'||answer=='Y') {
		    printf("Please enter the contact's cell phone number: ");
	        scanf("%s", Num.cell);
	     }

	 printf("Do you want to enter a home phone number? (y or n): ");
	 scanf(" %c", &answer);
	     if (answer =='y'||answer=='Y') {
			 printf("Please enter the contact's home phone number: ");
	         scanf("%s", Num.home);
	     }
				    
	 printf("Do you want to enter a business phone number? (y or n): ");
	 scanf(" %c", &answer);
		 if (answer =='y'||answer=='Y') {
			 printf("Please enter the contact's business phone number:");
			 scanf("%s", Num.business);
			 printf("\n");
		 }
					       
	
	// Display Contact Summary Details
 printf("Contact Details\n");
 printf("---------------\n\n");

	// Display Completion Message
 printf("Name Details\n");
 printf("First name: %s\n", N.firstName);
 printf("Middle initial(s): %s\n", N.middleInitial);
 printf("Last name: %s\n\n", N.lastName);
 
 printf("Address Details\n");
 printf("Street number: %d\n", A.streetNumnber);
 printf("Street name: %s\n", A.street);
 printf("Apartment: %d\n", A.apartmentNumber);
 printf("Postal code: %s\n", A.postalCode);
 printf("City: %s\n\n", A.city);

 printf("Phone Numbers:\n");
 printf("Cell phone number: %s\n", Num.cell);
 printf("Home phone number: %s\n", Num.home);
 printf("Business phone number: %s\n\n", Num.business);

 printf("Structure test for Name, Address, and Numbers Done!");
	return 0;
}

/*  SAMPLE OUTPUT:

Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888

Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song

Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto

Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888

Structure test for Name, Address, and Numbers Done!
*/