#include <stdio.h>

int main()
{
	int c;
	c = getchar();
	while (c != EOF)
	{
		printf("The result of getchar() != EOF is: %d\n", c != EOF);
		putchar (c);
		c = getchar();
	}
	printf("The result of getchar() != EOF is: %d\n", c != EOF);
}
