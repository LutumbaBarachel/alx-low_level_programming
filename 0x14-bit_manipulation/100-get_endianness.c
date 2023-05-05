#include "main.h"

/**
* get_endianness - checks the endianness of the system
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int test = 1;
char *byte_ptr = (char *)&test;

return ((byte_ptr[0] == 1) ? 1 : 0);
}
