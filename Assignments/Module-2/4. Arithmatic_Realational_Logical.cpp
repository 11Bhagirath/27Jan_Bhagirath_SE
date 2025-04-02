#include <stdio.h>

main() 
{
    int a, b;

    // Accepting two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic operations
    printf("\nArithmetic Operations:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    
    // Checking division and modulo for zero divisor
    if (b != 0)
	{
		printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
	}	

		else 
		{
        	printf("Division and Modulo by zero are not allowed.\n");
    	}

    // Relational operations
    printf("\nRelational Operations:\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);

    // Logical operations
    printf("\nLogical Operations:\n");
    printf("(%d && %d) : %d\n", a, b, a && b);
    printf("(%d || %d) : %d\n", a, b, a || b);
    printf("!(%d) : %d\n", a, !a);
    printf("!(%d) : %d\n", b, !b);
}

