# 3. laboratorijas darba - Derivative - atskaite

## Teorija
Programma, kura skaita funkcijas atvasinājuma vērtības. Mana funkcija - exp(x).

### Kods
```
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
```
Nes ievadam robezas,kur vajag skaitit funkcijas atv. vertibas un to precezitati,peec tam visus datus ieraksta failaa un ar "Gnuplot" paliidziibu mees ziimeejam funkcijas grafiku.

### Rezultaats
```
Ievadi a,b
0
6.28
Ievadi precizitāti
0.01

```
### Analiize
Beigas mees redzam, ka funkcijas grafiki atskiraas ar decimaliem skaitliem.

### Grafiks
![Funkcijas grafiks] (https://github.com/coolymlg/RTR105/blob/master/darbs/3ld_derivative/derivative_graph.png)
