#include <stdio.h>
#include <conio.h>   
//AaSh
void main()
{
	int a,b,k,j,n;
        printf("ENTER A NUMBER\n");
        scanf_s("%d",&n);
	k = 0;
	j = n % 2;
	if (j == 0)
	{
		printf("\n%d is not a prime number", n);
		k = k + 1;
	}
	else
	{
		for (a = 3; a <= n/2; a = a + 2)
		{
			b = n%a;
			if (b == 0)
			{
				printf("\n%d is not a prime number",n);
				k = k + 1;
				break;
			}
		}
	}
	if (k == 0)
		printf("\n%d is a prime number",n);
	_getch();
}
