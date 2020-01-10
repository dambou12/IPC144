//name: TCHOUTEDJOUM DAMBOU SERGES 
//email:stchoutatgoum@myseneca.ca
//id:109240176
// course:IPC144 SRR
//workshop:w4


#include<stdio.h>
int main(void){
  //declaration variable
     int days;
     int Low[10];
     int High[10];
     int i;
  
     printf("---=== IPC Temperature Calculator V2.0 ===---\n");
 
  //enter day       

	do
     {
       printf("Please enter the number of days, between 3 and 10, inclusive: ");
       scanf("%d", &days);
       printf("\n");
	      if (days<3 ||days >10)
		 printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		 scanf("%d", &days);
		 printf("\n");
	    }while (days<3||days>10 );

    //record temperature for each day      

	for( i= 0; i < days; i++){
	   printf("Day %d - High: ",i+1);
	    scanf("%d",&High[i]);
	   printf("Day %d - Low: ",i+1);
	    scanf("%d",&Low[i]);
	   }

   //display the result
	printf("\n");
       printf("Day  Hi  Low\n");
	for(i = 0; i < days ;i++ )
	printf("%d    %d    %d\n", i+1, High[i], Low[i]);        
   return 0;



