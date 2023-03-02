#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes words in a string
 * @s: string to be evaluated
 * Return: char pointer of a string
 */

char *cap_string(char *s)
{
        int count = 0;

        while (s[count])
	{
                while (!(s[count] >= 'a' && s[count] <= 'z'))
                        count++;

                if (s[count - 1] == ' ' || s[count - 1] == '.' ||
                    	s[count - 1] == '"' || s[count - 1] == '\t' ||
                    	s[count - 1] == '\n' || s[count - 1] == '(' ||
                    	s[count - 1] == ')' || s[count - 1] == ';' ||
			s[count - 1] == '{' || s[count - 1] == '}')
		{
        	        s[count] -= 32;
		}

		count++;

	}
	return (s);
}
