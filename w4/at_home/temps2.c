// name: TCHOUTEDJOUM DAMBOU
// email:stchoutatgoum@myseneca.ca
// id:109240176
// course:IPC144 SRR
// WORKSHOP:W4_AT_HOME

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMS 10

int main(void) {

	int days;
	int total;
	int days1;
	int Low[NUMS];
	int High[NUMS];
	int i;
	int Highest = -40;
	int Lowest = 60;
	int highestday;
	int lowestday;
	int lowtotal = 0;
	int hightotal = 0;
	float average;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");


	do {
		printf("Please enter the number of days, between 3 and 10, inclusive: ");
		scanf("%d", &days);
		printf("\n");

		if (days < 3 || days > 10) {
			printf("Invalid entry,please enter a number between 3 and 10, inclusive: ");
			scanf("%d", &days);
			printf("\n");
		}
	} while (days < 3 || days > 10);
	// load the temperature for each day
	for (i = 0; i < days; i++) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &High[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &Low[i]);

		//select the highest and lowest

		if (High[i] > Highest) {
			Highest = High[i];
			highestday = i + 1;
		}
		if (Low[i] < Lowest) {
			Lowest = Low[i];
			lowestday = i + 1;
		}
	}

	//first display

	printf("\n");
	printf("Day  Hi  Low\n");
	for (i = 0; i < days; i++)
		printf("%d    %d    %d\n", i + 1, High[i], Low[i]);
	printf("\n");
	printf("The highest temperature was %d, on day %d\n", Highest, highestday);
	printf("The lowest temperature was %d, on day %d\n", Lowest, lowestday);
	printf("\n");


	//enter the number betwee 1 and 4
	do {
		lowtotal = 0;
		hightotal = 0;
		total = 0;
		printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", days);
		scanf("%d", &days1);
		printf("\n");
		if (days1 <0) {
			printf("Goodbye!\n");
			break;
		}
		else if (days1 > days) {
			printf("Invalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &days1);
			printf("\n");
		}

		for (i = 0; i < days1; i++) {
			lowtotal = lowtotal + Low[i];
			hightotal = hightotal + High[i];

		}
		total = lowtotal + hightotal;
		average = ((float)total) / (days1 * 2);

		printf("The average temperature up to day %d is: %.2f\n", days1, average);
		printf("\n");
	} while (days1 > 0);

	return 0;
}
