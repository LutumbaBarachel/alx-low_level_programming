#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 characters
*
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b == '0' || *b == '1')
{
result <<= 1;
result |= *b - '0';
}
else
{
return (0);
}
b++;
}

return (result);
}
