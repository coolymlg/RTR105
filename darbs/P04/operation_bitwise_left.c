#include<stdio.h>

void main ()
{
int a=10;//atmina paradisies mainigais a (izmers 4 byte,saturs 0000 0000 0000 0000 0000 0000 0000 1010)
printf("Operacija <<: %d<<1 rezultats %d\n", a, a<<1);//sagaidam skaitli 20

int b; //atmina paradisies mainigas b (izmars 1 byte saturs ???? ???? ???? ???? ???? ???? ???? ????)
printf ("B mainiga \"sakuma\" stavoklis (uzreiz pec deklaresanas); %d \n,", b);

b=a<<2; // seit ir divas operacijas
printf("Operacija <<: %d<<%d rezultats %d \n" ,a,2,b); //sagaidam skaitli 40

int c;
printf("Papetisim << operaciju ------------------\n");
printf("Cienijamais lietotajs,ludzu ievadi oepracijas pirmo operantu: ");
scanf("%d",&a);
printf("Cienijamais lietotajs,ludzu ievadi oepracijas otro operantu: ");
scanf("%d",&c);
b=a<<c;
printf("---------------------\n Skaties,kas ir sancis :%d\n",b);






//char a=10;//atmina paradisies mainigais a (izmers 1 byte,saturs 0000 1010)
//printf("Operacija <<: %d<<1 rezultats %d\n", a, a<<1);//sagaidam skaitli 20

//char b; //atmina paradisies mainigas b (izmars 1 byte saturs ???? ????)
//printf ("B mainiga \"sakuma\" stavoklis (uzreiz pec deklaresanas); %d \n,", b);

//b=a<<2; // seit ir divas operacijas
//printf("Operacija <<: %d<<%d rezultats %d \n" ,a,2,b); //sagaidam skaitli 40

//char c;
//printf("Papetisim << operaciju \n------------------\n");
//printf("Cienijamais lietotajs,ludzu ievadi oepracijas pirmo operantu: ");
//scanf("%d",&a);
//printf("Cienijamais lietotajs,ludzu ievadi oepracijas otro operantu: ");
//scanf("%d",&c);
//b=a<<c;
//printf("---------------------\n Skaties,kas ir sancis :%d\n",b)
//
}
