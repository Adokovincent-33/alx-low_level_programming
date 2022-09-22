#include "main.h"

/**
*infinite_add - add two answers
*@n1: first number
*@n2: second number
*@r: buffer for result
*@size_r: buffer size
*
*Return: address r or 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, k, l, m, n;
for (i = 0; n1[i]; i++)
for (j = 0; n2[j]; j++)
if (i > size_r || j > size_r)
return (0);
n = 0;
for (i -= 1; j -= 1; k = 0; k < size_r - 1; i--, j--, k++)
{
n = n;
if (i >= 0)
n += n1[i] - '0';
if (j >= 0)
n += n2[j] - '0';
if (i < 0 && j < 0 && n == 0)
{

