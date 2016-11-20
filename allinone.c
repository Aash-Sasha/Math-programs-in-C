#include <stdio.h>
#include <conio.h>

int welcome();
int valuen();
int factorialofn(int n);
int primeornot(int n);
int evenorodd(int n);
int perfectnum(int n);
int fibonacci(int n);
void finishz();
void main()
{
	int z, n;
	int welcome();
	z = welcome();
	switch (z)
	{
	case 1:
		printf("-=Factorial of a number=-");
		n = valuen();
		factorialofn(n);
		finishz();
		break;
	case 2:
		printf("-=Prime or not=-");
		n = valuen();
		primeornot(n);
		finishz();
		break;
	case 3:
		printf("-=Odd or Even=-");
		n = valuen();
		evenorodd(n);
		finishz();
		break;
	case 4:
		printf("-=Sum of 1st n perfect number=-");
		n = valuen();
		perfectnum(n);
		finishz();
		break;
	case 5:
		printf("-=Print 1st n fibonacci number=-");
		n = valuen();
		fibonacci(n);
		finishz();
		break;
	case 6:
		exit();
		break;
	default:
		printf("Wrong Input,Try Again");
		welcome();
	}

	_getch();
}
int welcome()
{
	printf("MADE BY -=AaSh=-\n-=CALCULATOR=-\n");
	printf("Input\n");
	printf("1 To find Factorial of n\n2 To check n is prime or not\n3 To check n is odd or even\n4 To find Sum of 1st n perfect number\n5 To print 1st n fibonacci numbers\n6 To exit\n");

	int z;
	scanf_s("%d", &z);
	return (z);
}
int valuen()
{
	int k;
	printf("\nEnter the value of n\n");
	scanf_s("%d", &k);

	return (k);
}
int factorialofn(int n)
{
	int a, b;
	for (a = 1, b = 1; a <= n; a = a + 1)
	{
		b = b*a;
	}
	printf("\nFactorial %d is %d", n, b);
	return 0;
}
int primeornot(int n)
{
	int a, b, k, j;
	k = 0;
	j = n % 2;
	if (j == 0)
	{
		printf("\n%d is not a prime number", n);
		k = k + 1;
	}
	else
	{
		for (a = 3; a < n; a = a + 2)
		{
			b = n%a;
			if (b == 0)
			{
				printf("\n%d is not a prime number", n);
				k = k + 1;
				break;
			}
		}
	}
	if (k == 0)
		printf("\n%d is a prime number", n);
	return 0;
}
int evenorodd(int n)
{
	if (n % 2 == 0)
		printf("%d is Even", n);
	else
		printf("%d is Odd", n);
	return 0;
}
int perfectnum(int n)
{
	int a, b, asum, u_sum, k;
	k = 0;
	asum = 0;
	u_sum = 0;
	printf("\n Numbers are\n\n");
	for (a = 5;; a = a + 1)
	{
		for (b = 1; b < a; b = b + 1)
		{
			if (a%b == 0)
			{
				asum = asum + b;
			}

		}
		if (asum == a)
		{
			printf("%d\n", a);
			u_sum = u_sum + asum;
			k = k + 1;
			asum = 0;
		}
		else
			asum = 0;
		if (k == n)
			break;
	}
	printf("\nSum of 1st %d perfect number is %d\n", n, u_sum);
	return 0;
}
int fibonacci(int n)
{
	int k, a, b, c;

	a = 0;
	b = 1;
	c = 1;

	if (n > 0)
		printf("0 \n");

	for (k = 1; k <= n - 1; k = k + 1)
	{
		printf("%d \n", c);
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
void finishz()
{
	int p;
	printf("\nINPUT 1 to restart\nINPUT 2 to exit\n");
	scanf_s("%d", &p);

	if (p == 1)
		main();
	if (p == 2)
		exit();
}
