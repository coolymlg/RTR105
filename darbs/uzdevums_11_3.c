#include<stdio.h>

void main()
{
int i,fact=1,N;

printf("Ievadiet skaitli ");
scanf("%d",&N);
for(i=1;i<=N;i++)
 {
	fact=fact * i;
}
if (fact!=0)
	printf("Skaitla %d faktorials ir %d\n!",N,fact);
else {printf("Saja datu tipa faktorialu nevar atrast\n");}

}
