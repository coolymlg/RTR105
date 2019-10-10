#include<stdio.h>

void main()
{
int number1, number2;
printf("Cienijamais lietotaj,ludzu,ievadi 1. skaitli: ");
scanf("%d",&number1);
printf("Cienijamais lietotaj,ludzu,ievadi 2. skaitli: ");
scanf("%d",&number2);

	if(number1 % 2 == 0)
printf ("Tavs pirmais skaitlis  ir para skaitlis\n");

	else
printf ("Tavs pirmais skaitlis nav para skaitlis\n");

	if(number2 % 2 == 0)
printf ("Tavs otrais skaitlis  ir para skaitlis\n");

        else
printf ("Tavs otrais skaitlis nav para skaitlis\n");

}
