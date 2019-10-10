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
//printf ("Preteji ir divi gadijumi- pirmais < otrais vai pirmais==otrais\n");

	else
if (number1 < number2)

printf ("Tavs pirmais skaitlis %d ir > neka otrais skaitlis %d\n", number1 ,number2);
else
printf ("Tavs pirmais skaitlis %d ir == ar otro skaitli %d\n", number1 ,number2);

//printf ("Tavs pirmais skaitlis %d ir < neka otrais skaitlis %d\n", number1 ,number2);
//printf("Tavs pirmais skaitlis ir vai nu < neka otrais skaitlis\n");
//printf("Tavs pirmais skaitlis %d ir vai nu = ar otro skaitli %d\n", number1 ,number2);
}
