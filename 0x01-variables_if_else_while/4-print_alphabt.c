#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * return: Always 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		if (low == 'q' || low == 'e')
			continue;
				putchar(low);
	putchar('\n');
	return (0);
}
