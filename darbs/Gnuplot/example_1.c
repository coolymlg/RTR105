#include<stdio.h>
#include<math.h>

int main()
{
FILE *fprt;
float a,x,delta_x,delta_y,b,y;
a = 0;
b = 2*M_PI;

fprt=fopen("sin_dati.dat", "w");
x = a;
delta_x = 0.1;
delta_y = 1;
printf("\tx\n");
while (x < b)
{
printf("%10.1f\n %10.1f ",x,y);
x += delta_x;
y += delta_y;
}
fclose(fprt);
}
