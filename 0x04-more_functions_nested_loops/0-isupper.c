/*
 *Check if a character is an uppercase letter.
 *otherwise it returns 0
 *Prototype: int _isupper(int c);
 *Returns: 1 if c is uppercase
 *Returns: 0 otherwise
 */

int _isupper(char c)
{
if (c >= 'A' && c <= 'Z')
return (1); /* 'c' is uppercase */
else
return (0); /* 'c' is not uppercase */
}
