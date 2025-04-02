#include <stdio.h>
int fibonacci_recursive(int n) 
{
    if (n <= 1) 
	{
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}


int fibonacci_iterative(int n)
 {
    if (n <= 1) 
	{
        return n;
    }
    int a = 0, b = 1, fib = 0;
    for (int i = 2; i <= n; i++) 
	{
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

main() 
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci sequence using recursion: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");
    
    printf("%dth Fibonacci number (Recursive): %d\n", n, fibonacci_recursive(n));
    printf("%dth Fibonacci number (Iterative): %d\n", n, fibonacci_iterative(n));
    
    return 0;
}

