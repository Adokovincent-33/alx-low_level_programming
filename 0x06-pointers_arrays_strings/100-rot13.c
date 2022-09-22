#include "main.h"

/**
* rot13 - encodes a string using rot13
* @str: the string targeted
* Return: returns the encoded string
*/
char *rot13(char *s)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i); i++)
{
for (j = 0; j < 52; j++)
{
if (a[j] == *(s + i))
{
*(s + i_ = b[j];
break;
}
}
}
return (s);
}
