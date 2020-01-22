# 2. laboratorijas darba - Roots - atskaite

## Teorija
Programma, kura atrod sakņu skaitu no funkcijas - exp(x).
### Kods
```
#include<stdio.h>
#include<math.h>
//liet. ievada sk a "kadam y tu gribi sameklet atbilstosu x?"
int main()
{
float a, b, x,delta_x,funkca = exp(a), funkcb = exp(b);
printf("Ievadiet a,b vertibas \n");
scanf("%f %f",&a,&b);
printf("Ievadiet precizitates vertibu \n");
scanf("%f",&delta_x);
int i=0;
if (funkca *funkcb >0)
	{
printf("Intervala [%2f:%2f] exp(x) funkcijai ",a,b);
printf(" saknu nav (vai taja ir paru saknu skaits)\n");
return 1;
	}
printf("exp(%7.3f)=%7.3f\t\t\t\t",a,exp(a));
printf("exp(%7.3f)=%7.3f\n",b,exp(b));

while((b-a)>delta_x)
	{i++;

x = (a+b)/2.;
if(funkca*exp(x)>0) //a=0 -> reizin ir 0 visu laiku

a = x;

else
b = x;

printf("%2d. exp(%7.3f)=%7.3f\t",i,a,exp(a));
printf("exp(%7.3f)=%7.3f\t",x,exp(x));
printf("exp(%7.3f)=%7.3f\n",b,exp(b));

	}
printf("Sakne atrodas pie x=%.3f,ja ...\n",x);
printf("Intervals saskaitas %d reizes\n",i);
return 0;

}
```
### Rezultāts
```
Ievadiet a,b vertibas
0
4.71
Ievadiet precizitates vertibu
0.001
Intervala [0.000000:4.710000] exp(x) funkcijai saknu nav (vai taja ir paru saknu skaits)
```
### Analīze
Rezultātā mēs redzam, ka intervālā no 0 līdz 4,71Pi funkcijai sakņu nav. Vajag pievienot, ka manai funkcijas vispār nav sakņu, jo tā ir eksponente(viņa nekad nekrusto OX asi).
### Grafiks
![Grafiks](https://github.com/coolymlg/RTR105/blob/master/darbs/1ld_series/DIBIL_x2_exp(x)_graf.png)
