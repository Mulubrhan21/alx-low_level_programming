#include <stdio.h>
/**
*main -entry point
*return: always 0(successs)
*/
int main(void)
{
printf("size of the char : %d bytes\n", sizeof(char));
printf("size of int : %d bytes\n", sizeof(int));
printf("size of long int: %d bytes\n", sizeof(long int));
printf("size of long long int : %d bytes\n", sizeof(long long int));
printf("size of float: %d bytes\n", sizeof(float));
return(0);
}
