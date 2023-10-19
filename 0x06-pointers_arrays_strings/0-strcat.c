#include<stdio.h>
#include<string.h>
char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (result);
}
int main(void)
{
charstr1[50]  = "Hello,";
charstr2[]  = "world!";
printf("Beforeconcatenation:\n");
printf("str1:%s\n", str1);
printf("str2:%s\n\n");
_strcat(str1, str2);
printf("Afterconcatenation:\n");
printf("str1:%s\n", str1);
return (0);
}
