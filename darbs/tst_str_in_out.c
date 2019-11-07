#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char txt[30];
    fptr = fopen("testa_teksts.txt", "w+");

    printf("Ievadiet tekstu \n");
    scanf("%[^\n]", &txt);
    fprintf(fptr, "Teksts- %s\n", txt);
    fclose(fptr);

char buff[255];
fp= fopen("testa_teksts.txt", "r");
while (fscanf(fp, %s , buff) !=EOF)
{
printf("%s",buff);
}

}
 
