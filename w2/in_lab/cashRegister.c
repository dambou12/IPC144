/* TCHOUTEDJOUM DAMBOU
   109240176
   IPC144 SRR
   stchoutatgoum@myseneca.ca
*/
# include<stdio.h>
 
 int main(void)
{
  double amount;
  int looniesNo;
  int quatersNo;
  double  newamount1 ;
  double newamount2;

 printf("please enter the amount to be paid:$");
  scanf("%lf",&amount);

  //calculate the number of loonies

 looniesNo = (int)amount/1;

 newamount1 = amount-(looniesNo * 1);

//calculate  quaters

  quatersNo=(int)(newamount1 /0.25);

 newamount2=newamount1 - (quatersNo*0.25);

 printf("loonies required: %d,",looniesNo);
 printf("balance owing is %lf\n",newamount1);
 printf("the quaters required: %d,",quatersNo);
 printf("balance owing %lf\n",newamount2);

return 0;
}
