/* -------------------------------------------
Name:tchoutedjoum dambou
Student number:109240176
Email:stchoutatgoum@myseneca.ca
Section:8
Date:03/06/2018
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name  {

	char firstName[31];
	char middleInitial[7];
	char lastName[36];

};

// Structure type Address declaration
// Place your code here...
struct Address  {

	int streetNumnber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];

};


// Structure type Numbers declaration
// Place your code here...
 struct Numbers  {

	char cell[21];
	char home[21];
	char business[21];

};
 //This array will hold a string of 5 characters.
 //The last position is occupied by the null character '\0',
 //which signals the end of the string.