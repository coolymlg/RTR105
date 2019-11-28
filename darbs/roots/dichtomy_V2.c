#include<stdio.h>
#include<math.h>
//liet. ievada sk a "kadam y tu gribi sameklet atbilstosu x?"
int main()
{
float a=0.01, b=1.5*M_PI, x,delta_x=1.e-3/*0.001*/,funkca = sin(a), funkcb = sin(b);
int i=0;
if (funkca *funkcb >0)
	{
printf("Intervala [%2f:%2f] sin(x) funkcijai ",a,b);
printf(" saknu nav (vai taja ir paru saknu skaits)\n");
return 1;
	}
printf("sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
printf("sin(%7.3f)=%7.3f\n",b,sin(b));

while((b-a)>delta_x)
	{i++;

x = (a+b)/2.;
if(funkca*sin(x)>0) //a=0 -> reizin ir 0 visu laiku

a = x;

else
b = x;

printf("%2d. sin(%7.3f)=%7.3f\t",i,a,sin(a));
printf("sin(%7.3f)=%7.3f\t",x,sin(x));
printf("sin(%7.3f)=%7.3f\n",b,sin(b));

	}
printf("Sakne atrodas pie x=%.3f,ja ...\n",x);
printf("Intervals saskaitas %d reizes\n",i);
return 0;

}
