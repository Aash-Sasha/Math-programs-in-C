#include <stdio.h>
#include <conio.h>

void main()
{
  int n;
  printf("ENTER A NUMBER\n");
  scanf_s("%d",&n);
	if (n % 2 == 0)
		printf("%d is Even", n);
	else
		printf("%d is Odd", n);
	_getch();
}
