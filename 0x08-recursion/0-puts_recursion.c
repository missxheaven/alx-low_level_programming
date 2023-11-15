#include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == '\0') // Base case: end of the string
    {
        putchar('\n'); // Print a new line
        return;
    }
    
    putchar(*s); // Print the current character
    _puts_recursion(s + 1); // Recursively call the function with the next character
}

int main()
{
    char str[] = "Hello, world!";
    _puts_recursion(str);
    return 0;
}
