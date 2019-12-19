#include<stdio.h>
#include<string.h>
    int main()
    {
      char s[100];
 int burti=0,i;
	printf("Ievadiet simbolu rindu ");
	scanf("%[^\n]",&s);
 for(i=0;i<strlen(s);i++)
{
if(s[i] != ' ')
burti++;
}
 printf("%d\n",burti);
    char c = 'k';

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("The ASCII value of %c is %d", k, k);
    return 0;
}
