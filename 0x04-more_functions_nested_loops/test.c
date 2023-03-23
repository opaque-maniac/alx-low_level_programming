#include <stdio.h>

int main(void)
{
	int c = 8;

	if (c >= '0' && c <= '9')
	{
		printf("%d\n", c);
	}else
	{
		printf("Sorry\n");
	}
	return (0);
}
