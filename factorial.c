#include <stdio.h>
#include <conio.h>

void main()
{
  
  int a, b,n;
  printf("ENTER A NUMBER\n");
  scanf_s("%d",&n);
 	for (a = 1, b = 1; a <= n; a = a + 1)
	{
		b = b*a;
	}
	printf("\nFactorial %d is %d", n, b);
  
}  
