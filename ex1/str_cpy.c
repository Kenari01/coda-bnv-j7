#include <stdlib.h>
#include <stdio.h>

int str_len(char * str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
    }
    return i;
}
char *str_cpy(char * str)
{

  char * copy = malloc(str_len(str) + 1 *sizeof(char));

   int i = 0;
   
   while(str[i] !='\0')
   {
    copy[i] = str[i];

    i = i + 1;

   }
   return(copy);

}