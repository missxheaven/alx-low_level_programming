#include <stdio.h>

/* Declare a custom isupper function */
int _isupper(char c)
{
return (c >= 'A' && c <= 'Z');
}
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
