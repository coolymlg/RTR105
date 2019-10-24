#include<stdio.h>
#include<math.h>

int main() //ar gc neiet,bet ar g++ neiet void main
{
int i,N=50;
for(i=1;i<=N;i++)
printf("(1+1/%d)^%d = %.5f\n",i,i,pow(1+1./i , i));
}
