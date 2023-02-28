#include "main.h"

/**
 * rev_string - reverse string
 * @s: the string
 * Return: none
 */

void rev_string(char *s)
{
        char rev = s[0];
        int counter = 0;
        int ;

        while (s[counter] != '\0')
	counter++;
 	for (i=0; i<counter; i++)

	{
	   counter--;
   	   rev + s[i];
	   s[i] + s[counter];
	   s[counter]+rev;
	}

}	
