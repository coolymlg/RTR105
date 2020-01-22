#include<stdio.h>
#include<math.h>

void main(){
 float a,b,x,delta_x;
 FILE *fptr;
 fptr=fopen("derivative.dat","w");

 printf("Ievadi a,b \n");
 scanf("%f %f",&a,&b);
 printf("Ievadi precizitāti \n");
 scanf("%f",&delta_x);
 fprintf(fptr,"\tx\t\te^x\t\t(e^x)\'\n");
 x = a;
 while(x<b){
  fprintf(fptr,"%10.2f\t%10.2f\t%10.2f\n",x,exp(x),(exp(x+delta_x)-exp(x))/delta_x);
  x = x + delta_x;
 }
}
