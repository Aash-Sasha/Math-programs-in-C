#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, asum, u_sum ,k;
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
    printf("\nSum of 1st %d perfect number is %d\n", n,u_sum);
    _getch();
}


