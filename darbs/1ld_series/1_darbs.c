#include<stdio.h>
#include<math.h>
void main()
{
double x,y,a,S;
printf("Ievadiet x vertibu \n");
scanf("%le",&x);
 int k=0;
 y = exp(x);
 printf("y=exp(%.2f)=%.2f\n",x,y);

 a = pow(x,k)/(1.);
 S = a;
 while(k<1000){
  k++;
  a = a * x/k;
  S = S + a;
  if(k == 0) {printf("0 - %8.6f\t%8.2f\n",a,S);}
  if(k == 205) {printf("a205 - %e\tS205 - %.2f\n",a,S);}
  if(k == 499) {printf("a499 - %e\tS499 - %.2f\n",a,S);}
  if(k == 500) {printf("a500 - %e\tS500 - %.2f\n",a,S);}
  if(k == 999) {printf("a999 - %e\tS999 - %.2f\n",a,S);}
  if(k == 1000) {printf("a1000 - %e\tS1000 - %.2f\n",a,S);}
  }
printf("\n");
 printf("     500\n");
 printf("     ----\n");
 printf("     \\           k\n");
 printf("      \\         x\n");
 printf("f(x)= |    ------------\n");
 printf("      /         k!\n");
 printf("     /\n");
 printf("     ----\n");
 printf("      k=0\n");

 printf("\n");
 printf("         x\n");
 printf("R=   -----------\n");
 printf("         k\n");
}
