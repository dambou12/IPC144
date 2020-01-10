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


//------------------------------------------------------
// Structure Types
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        structures here...                       |
// +-------------------------------------------------+

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};


// Structure type Address declaration
struct Address {

	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];

};

// Structure type Numbers declaration
// Place your code here...
struct Numbers {

	char cell[21];
	char home[21];
	char business[21];

};


// Structure type Numbers declaration
// Place your code from Milestone #2 here...


// Structure type Contact declaration
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};

// Structure type Numbers declaration
// Place your code here...
// NOTE: Modify the C String arrays sizes according to the
//       Assignment-2 Milestone-1 specifications





//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-4 |
// |        function prototypes here...              |
// +-------------------------------------------------+

// Get and store from standard input the values for Name
// Place your code here...
void getName(struct Name *name);

// Get and store from standard input the values for Address
// Place your code here...
void getAddress(struct Address *address);

// Get and store from standard input the values for Numbers
// Place your code here...
void getNumbers(struct Numbers *numbers);


// Get and store from standard input the values for a Contact (NOT: Contacts)
// NOTE:  Make sure the structure Contact does not have an 's' on the end!
// Put function prototype below:
void getContact(struct Contact *contact);