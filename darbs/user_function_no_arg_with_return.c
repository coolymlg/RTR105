#include<stdio.h>

int user_function_5()

{
int i_uf;
printf("Cienijamais lietotaj,ludzu ievadi vienu skaitli(ar 5 jautajumi beigsies): \n");
scanf("%d",&i_uf);
return i_uf;
}

void main()
{
int i_main, N=5;


i_main=user_function_5();

while(i_main!=N)
{
 printf("Reagejot uz manas lietotaja funkcijas darbibam,tu esi ievadijis %d\n",i_main);
 i_main=user_function_5();
 }
 printf("Ta ka esi ievadijis 5,tad jautajumu vairs nav \n");
}

