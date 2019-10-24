#include<stdio.h>
void main()
{
int n1 ,n2 ,n3, atb;
printf("Cienijamais lietotaj,ludzu,ievadi 1. skaitli: ");
scanf("%d",&n1);
printf("Cienijamais lietotaj,ludzu,ievadi 2. skaitli: ");
scanf("%d",&n2);
printf("Cienijamais lietotaj,ludzu,ievadi 3. skaitli: ");
scanf("%d",&n3);
printf("Kada seciba jus gribat kartot ciparus? \n");
printf("1-augošā secībā,\n2- dilstošā secība,\n3- augošā pēc moduļa,\n4- dilstošā pēc moduļa,\n5- pabeigt darbu\n");
scanf("%d",&atb);
int max;
int min;
int mid;
int mod_max;
int mod_min;
int mod_mid;
int n=5;


if(atb==1)
	{
	if (n1 > n2 && n1 > n3) {printf("Lielakais skaitlis ir %d\n",n1);max=n1;}
	if (n2 > n1 && n2 > n3) {printf("Lielakais skaitlis ir %d\n",n2);max=n2;}
	if (n3 > n2 && n3 > n1) {printf("Lielakais skaitlis ir %d\n",n3);max=n3;}
	if (n1 > n2 && n1 < n3) {printf("Videjais skaitlis ir %d\n",n1);mid=n1;}
	if (n2 > n3 && n2 < n1) {printf("Videjais skaitlis ir %d\n",n2);mid=n2;}
	if (n3 > n2 && n3 < n1) {printf("Videjais skaitlis ir %d\n",n3);mid=n3;}
	if (n1 < n2 && n1 < n3) {printf("Mazakais skaitlis ir %d\n",n1);min=n1;}
	if (n2 < n1 && n2 < n3) {printf("Lielakais skaitlis ir %d\n",n2);min=n2;}
	if (n3 < n1 && n3 < n3) {printf("Lielakais skaitlis ir %d\n",n3);min=n3;}
	}


//if(atb==2)
//	{
  //      printf("Mazakais skaitlis- %d\n",min);
//	printf("Videjais skaitlis- %d\n",mid);
//	printf("Lielakais skaitlis- %d\n",max);
  //      }
//
//
//
//
//
//	if(atb==3)
//printf("3");
//
//	if(atb==4)
//printf("4");
//
//	if(atb==5)
//printf("5");
//}
}




