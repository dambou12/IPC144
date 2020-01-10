/*
Name:tchoutedjoum dambou serges
Student number:109240176
Email:stchoutatgoum
Workshop:5
Section:ipc144
Date:2/20/2018
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 2

#define SIZE 4 

// Declare Struct Employee 
struct Employee {
	int id;
	int age;
	double salary;

};

/* main program */
int main(void) {
//      int deleteid;
	int done = 0;
	int id = 0;
	int option = 0;
	printf("---=== EMPLOYEE DATA ===---\n\n");

	// Declare a struct Employee array "emp" with SIZE elements
	struct Employee emp[SIZE] = { { 0 } };
	int num = { 0 };
	// and initialize all elements to zero
	int i;
	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0: // Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			for (i = 0; i < SIZE; i++) {
				if (emp[i].id > 0 && emp[i].age > 0 && emp[i].salary > 0)
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);

			}

			printf("\n");
			break;
		case 2: // Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");
			// Check for limits on the array and add employee 
			// data accordingly. 
			if (num < SIZE)
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[num].id);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[num].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[num].salary);
				printf("\n");
			}
			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			}
			num++;


			break;
		case 3://update employee salary
//			printf("Update Employee Information\n");
			printf("Update Employee Salary\n");
			printf("======================\n");
			do {

				printf("Enter Employee ID: ");
				scanf("%d", &id);
				for (i = 0; i < SIZE; i++) {
					if (id == emp[i].id) {
						printf("The current salary is %.2lf\n", emp[i].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[i].salary);
						printf("\n");
						done = 1;
					}
				}

			} while (done == 0);
			break;
		case 4: //remove employee
			printf("Remove Employee\n");
			printf("===============\n");
			do {

				printf("Enter Employee ID: ");
				scanf("%d", &id);
				for (i = 0; i < SIZE; i++) {
					if (id == emp[i].id) {
						printf("Employee %d will be removed", emp[i].id);
						printf("\n\n");
//                                              deleteid = emp[i].id;
						num--;
						done = 1;
						emp[i].id = emp[i + 1].id;
						emp[i].age = emp[i + 1].age;
						emp[i].salary = emp[i + 1].salary;
						emp[i + 1].id = 0;
						emp[i + 1].age = 0;
						emp[i + 1].salary = 0;
					}

				}



			} while (done == 0);

			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);



	return 0;
}



//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
111       34   78980.88
112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/
