#include <stdio.h>
#include <time.h>
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1) 
	{
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

unsigned long long factorial_iterative(int n) 
{
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) 
	{
        fact *= i;
    }
    return fact;
}

main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    
    clock_t start, end;
    double time_recursive, time_iterative;
    
    start = clock();
    printf("Factorial (Recursive): %llu\n", factorial_recursive(n));
    end = clock();
    time_recursive = (double)(end - start) / CLOCKS_PER_SEC;
    
    
    start = clock();
    printf("Factorial (Iterative): %llu\n", factorial_iterative(n));
    end = clock();
    time_iterative = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("Time taken (Recursive): %f seconds\n", time_recursive);
    printf("Time taken (Iterative): %f seconds\n", time_iterative);
    
    return 0;
}

