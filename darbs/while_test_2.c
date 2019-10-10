#include<stdio.h>

void main()
{
int number1, number2, yes_no,i=0;
yes_no=1;
while (yes_no && (i<5))
{
i=i+1; //i++ / i+=1;
printf("Cienijamais lietotaj,ludzu,ievadi 1. skaitli: ");
scanf("%d",&number1);
printf("Cienijamais lietotaj,ludzu,ievadi 2. skaitli: ");
scanf("%d",&number2);

	if(number1 > number2)
printf ("Tavs pirmais skaitlis %d ir > neka otrais skaitlis %d\n", number1 ,number2);
//break

	else
printf ("Tavs pirmais skaitlis %d ir < neka otrais skaitlis %d\n", number1 ,number2);

printf("Cienijamais lietotaj,vai gribi turpinat? \n");
printf("ja-jebkurs skaitlis iznemot 0 \n");
scanf("%d",&yes_no);

}

}
