#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;

    char txt[30];

    fptr = fopen("testa_teksts.txt", "w");

    printf("Ievadiet tekstu \n");

    scanf("%[^\n]", &txt);

    printf(fptr, "Teksts- %s\n", txt);

    fclose(fptr);

    fptr=fopen("test.txt","r");

    fscanf(fptr,"%[^\n]",file);

    printf("  Faila saturs-  %s\n",file);

fclose(fprt);
}
