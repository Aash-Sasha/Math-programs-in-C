#include <stdio.h>
#include <conio.h>

//AaSh
void main()

{
	int storage[64];
	unsigned long long int r, a, j,q,k;

	for (k = 0; k <= 64; k = k + 1)
	{
		storage[k] = 0;
	}
	printf("\t-=AaSh=-\nInput Value of n\n\n");
	scanf_s("%llu", &q);
	printf("\n-==Decimal to Binary==-\nVersion 4\n\n");
	//j = 0;
	for (a = 0; q > 1; a = a + 1)
	{
		r = q % 2;
		if (q > 1)
			printf("2|%llu|%llu\n------\n", q, r);
		q = q / 2;
		if (q <= 1)
			printf(" |%llu|", q);
		storage[a] = r;
	}
	storage[a] = q;
	printf("\n\nFinal Answer\n\n");
	for (j = 64; j >= 0; j = j - 1)
	{
		printf("%d", storage[j]);
	}
	_getch();
}
