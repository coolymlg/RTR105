#include <stdio.h>
#include <string.h>

void main()
{
 int i=1, m=0;
 char *s="I can use the online Help system from the Help menu.";
 int CountWord=1;
 for (i=1; i < strlen(s); i++)
  {
    if (s[i-1]==' ' && s[i]!=' ')
     CountWord++;
   if (strlen(s[i])<4)
    m++;
  }
printf("Vardu skaits = %d\n %d", CountWord, m);
}
