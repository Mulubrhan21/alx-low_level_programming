#include <stdio.h>
/**
* main -Entry point
*
* Return: always 0(Success/Correct)
*/
void main()

{
char Lower_Case;
char Upper_Case;

 for (Lower_Case= 'a'; Lower_Case<= 'z'; Lower_Case++)
  {
 putchar(Lower_Case);
 }
  for (Upper_Case= 'A'; Upper_Case<= 'Z'; Upper_Case++)
  {
  putchar(Upper_Case);
  }         

}
