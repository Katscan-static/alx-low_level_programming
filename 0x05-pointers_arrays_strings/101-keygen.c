#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - generate random passwords
 * Return: Always (0) success
 */

int main()
{
	int i;
	int sum;
	int c;
	int key[100];

	sum = 0;
	srand(time(0));

	for (i = 0; i < 100; i++)
	{
		key[i] = rand() % 78;
		sum += (key[i] + 48);
		putchar(key[i] + 48);
		if ((2772 - sum) - 48 < 78)
		{
			c = 2772 - sum - 48;
			sum += c;
			putchar(c + '0');
			break;
		}


	}
}
