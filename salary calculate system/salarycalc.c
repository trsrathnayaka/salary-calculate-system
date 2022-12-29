#include<stdio.h>
int main()
{
    int Basic,GrossRem,WorkInBonus,MonthlyBonus,sales,Years,AddAllow;
    char workIn;

                    printf ("Enter basic salary : ");
                    scanf ("%d",&Basic);
                    printf ("Enter years of service : ");
                    scanf ("%d",&Years);
                    printf ("Enter monthly sales : ");
                    scanf ("%d",&sales);
                    printf ("Enter 'L' if work in Lima, or N if not : ");
                    scanf ("%s",&workIn);

                    printf ("\n\n");

                     
                    if (sales<1000)
                        MonthlyBonus=(sales*15)/100;
                    else if (sales<2000)
                        MonthlyBonus=(sales*20)/100;
                    else if(sales>=2000)
                        MonthlyBonus=(sales*30)/100;
                    else
                        MonthlyBonus=0;




 printf ("Additional Allowance : %d \n",AddAllow);

 printf ("Monthly sales bonus : %d \n",MonthlyBonus);

 printf ("Work in Lima bonus : %d \n",WorkInBonus);

 GrossRem = AddAllow+WorkInBonus+MonthlyBonus+Basic;

 printf ("Gross remuneration : %d \n",GrossRem);


    return 0;
}
