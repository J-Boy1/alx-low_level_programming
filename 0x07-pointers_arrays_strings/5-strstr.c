#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle in the string haystack
 * @haystack:pointer to the string s
 * @needle:pointer to the string f
 */
 
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; needle[i]; i++)
{
      for (j = 0; haystack[j]; j++)
      {
           if (haystack[j] == needle[i])
               return (needle + i);
      }
    
}
return (0);
}
