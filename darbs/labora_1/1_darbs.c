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
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<25){
  k++;
  a = x/k;
  S = S + a;
  printf("%.2f\t%8.6f\t%8.2f\n",x,a,S);
  }
}
