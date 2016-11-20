#include <stdio.h>
#include <conio.h>

void main()

{
	int k,n, a, b, c;
	printf("Insert Value of n");
	scanf_s("%d", &n);

	a = 0;
	b = 1;
	c = 1;

	if (n > 0)
		printf("0 \n");
	
	for (k = 1; k <= n-1; k = k + 1)
	{
		printf("%d \n", c);
		c = a + b;
		a = b;
		b = c;
	}
	_getch();
}
