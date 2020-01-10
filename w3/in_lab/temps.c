//name:tchoutedjoum dambou
//ID 109240176
//Email:stchoutatgou@myseneca.ca
//course:ipc144




#include <stdio.h>

int main(void)
{
	int low;
	int high;
	int NUMS = 3;
	int lowTotal = 0;
	int highTotal = 0;
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
			if ((low < -40 || high > 40) || (low > high))
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
		} while ((low < -40 || high > 40) || (low > high));


		lowTotal = (lowTotal + low);
		highTotal = (highTotal + high);
	}
	average = (float)(lowTotal + highTotal) / (NUMS*2);
	printf("The average (mean) temperature was: %.2lf\n", average);

    


	return 0;
}
