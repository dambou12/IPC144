// Name:TCHOUTEDJOUM DAMBOU SERGES 
// Student Number:
// Email: schoutatgoum@myseneca.ca
// Section:ipc144 srr
// Workshop:3

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>

int main(void)
{
	int low;
	int high;
	int NUMS = 4;
	int lowest = 0;
	int highest = 0;
	int lowTotal = 0;
	int highTotal = 0;
	int highestday = 0;
	int lowestday = 0;
	float average;
	int i;
	printf("---=== IPC Temperature Analyzer ===---\n");



	for (i = 0; i < NUMS; ++i)
	{
		do {
			printf("Enter the high value for day %d: ", i + 1);
			scanf("%d", &high);
			printf("\n");
			printf("Enter the low value for day %d: ", i + 1);
			scanf("%d", &low);
			printf("\n");
			if ((low < -40 || high>40) || (low > high))
			{
				printf("Incorrect values, temperstures must be in the range -40 to 40,high must be greater than low\n\n");
			}



		} while ((low < -40 || high>40) || (low > high));


		lowTotal = (lowTotal + low);
		highTotal = (highTotal + high);




		if (high > highest)
		{
			highest = high;
			highestday = i + 1;
		}
		if (low < lowest)
		{
			lowest = low;
			lowestday = i + 1;
		}

	}

	average = (float)(lowTotal + highTotal) / (NUMS * 2);

	printf("The average (mean) temperature was: %.2lf\n", average);
	printf("The highest temperature was %d, on day %d\n", highest, highestday);
	printf("The lowest temperature was %d, on day %d\n", lowest, lowestday);

	return 0;
}
