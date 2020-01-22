# 1. laboratorijas darba - Teilora rindas - atskaite

## Teorija
Izmantojot mano funkciju "exp(x)" Teilora rindas un rekurences izteiksmes man izdevas programma, kura skaita funkcijas veertiibu, kuru ievada lietotājs.

### Kods
```
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
```
Skaitam "a" izmantojot Teilora rindas izteiksmi un pēc tam ciklaa izmantojam rekurences izteiksmi.

### Rezultaats
```
2.05
y=exp(2.05)=7.77
a205 - 2.964394e-323 S205 - 7.77
a499 - 0.000000e+00 S499 - 7.77
a500 - 0.000000e+00 S500 - 7.77
a999 - 0.000000e+00 S999 - 7.77
a1000 - 0.000000e+00 S1000 - 7.77
   
      500
      —--
       \       k
        \     x
  f(x)= | —----------
       /      k!
      /
      —--
      k=0

       x
R= —---------
       k
```

### Analiize
Pasa gala mes redzam, ka muusu funkcijas vērtība izmantojot Teilora rindas sakrīt ar funkcijas vērtību.

### Grafiks
![Grafiks](https://github.com/coolymlg/RTR105/blob/master/darbs/1ld_series/DIBIL_x2_exp(x)_graf.png)

