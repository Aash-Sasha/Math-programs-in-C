#include <stdio.h>

//AaSh
//version 4
//checked on gcc-linux

void main()
{
	int storage[64],j,k;
	unsigned long long int r,a,q;

        //make all element of storage array 0 
	for (k = 0; k <= 64; k = k + 1)
	{
		storage[k] = 0;
	}

        //print welcome message and take input
	printf("\t-=AaSh=-\nInput Value of n\n\n");
	scanf("%llu", &q);
        q=ULLONG_MAX;
	printf("\n-==Decimal to Binary==-\nVersion 4\n\n");

        //calculation and print table
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

        //print storage array in reverse
	printf("\n\nFinal Answer\n\n");//
	for (j = 64; j >= 0; j = j - 1)
	{
		printf("%d", storage[j]);
	}
}
