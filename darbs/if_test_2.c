#include<stdio.h>

void main()
{
int number1, number2;
printf("Cienijamais lietotaj,ludzu,ievadi 1. skaitli: ");
scanf("%d",&number1);
printf("Cienijamais lietotaj,ludzu,ievadi 2. skaitli: ");
scanf("%d",&number2);

	if(number1 > number2)
printf ("Tavs pirmais skaitlis %d ir > neka otrais skaitlis %d\n", number1 ,number2);

	else
printf ("Tavs pirmais skaitlis %d ir < neka otrais skaitlis %d\n", number1 ,number2);

}