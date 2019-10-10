#include<stdio.h>
#include<time.h>
void main()
{
int number,clock_t, start_t, end_t, total_t;
printf("Cienijamais lietotaj,ludzu,ievadi skaitli: ");
scanf("%d",&number);
start_t = clock();

	if((number%2) == 0)
printf ("Tavs skaitlis  ir para skaitlis\n");

	else
printf ("Tavs skaitlis nav para skaitlis\n");

end_t=clock();
//total_t(double)(end_t - start_t) / CLOCKS_PER_SEC;
printf("Aprekins aiznema no %ld lidz %ld -> %ld\n",start_t ,end_t ,end_t-start_t);
start_t=clock();
if(((number<<31)>>31))
printf ("Tavs skaitlis %d  ir para skaitlis\n",number);

        else
printf ("Tavs skaitlis %d nav para skaitlis\n",number);
end_t=clock();
printf("Aprekins aiznema no %ld lidz %ld -> %ld\n",start_t ,end_t ,end_t-start_t);

}
