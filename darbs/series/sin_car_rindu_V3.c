//S1, S2, S3 ,S4 -> S
//a1, a2, a3, a4 -> a
#include<stdio.h>
#include<math.h>

int main()
{
double x=2.05,y,a,S;
int i=0;

y=sin(x);
printf("%.2f\t %.2f\n",x,y);
a=pow(-1,i)*pow(x,2*i+1)/(1.);
S=a; //S0=a0;
printf("%.2f\t %.2f\t %.2f\n",x,a,S);
i++;

a=pow(-1,i)*pow(x,2*i+1)/(1.*1*2*3);
S=S+a; //S1=a0+a1; //S+=a1
printf("%.2f\t %.2f\t %.2f\n",x,a,S);
i++;

a=pow(-1,i)*pow(x,2*i+1)/(1.*1*2*3*4*5);
S=S+a; //S2=a0+a1+a2; //S+=a2
printf("%.2f\t %.2f\t %.2f\n",x,a,S);
i++;

a=pow(-1,i)*pow(x,2*i+1)/(1.*1*2*3*4*5*6*7);
S=S+a; //S3=a0+a1+a2+a3; //S+-a3
printf("%.2f\t %.2f\t %.2f\n",x,a,S);


}
