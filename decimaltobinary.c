#include <stdio.h>
#include <conio.h>

//AaSh
long long int personalpow(long long int x,long long int y);
void main()

{
	long long int r, a, j, q;
	printf("\t-=AaSh=-\nInput Value of n\n\n");
	scanf_s("%lld", &q);
	printf("\n-==Decimal to Binary==-\nVersion 2(final version)\n\n");
	j = 0;
	for (a = 0; q > 1;a=a+1) 
	{
		r = q % 2;
		if (q > 1)
			printf("2|%lld|%lld\n------\n", q, r); 
		q = q / 2;	
		j = (r*personalpow(10, a)) + j;
		if (q <= 1)
			printf(" |%lld|", q);
	}
	j = (q * personalpow(10, a) + j);
	printf("\n\n%lli\n",j);
	_getch();
}

long long int personalpow (long long int x,long long int y)
{
	long long int k,c=1,j=x;
	if (y == 0)
		j = x;
	else
		for (k = 1; k <= y; k = k + 1)
		{
			c =c*j;
		}
	return (c);
}

