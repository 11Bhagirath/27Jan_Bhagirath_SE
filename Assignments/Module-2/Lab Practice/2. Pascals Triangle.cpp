#include <stdio.h>
int binomialCoeff(int n, int k) 
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
	 {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void pascalLoop(int n)
 {
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j <= i; j++)
		{
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

int binomialCoeffRec(int n, int k)
 {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeffRec(n - 1, k - 1) + binomialCoeffRec(n - 1, k);
}

void pascalRec(int row, int col, int n) 
{
    if (row == n)
        return;
    if (col > row) 
	{
        printf("\n");
        pascalRec(row + 1, 0, n);
    } 
	else 
	{
        printf("%d ", binomialCoeffRec(row, col));
        pascalRec(row, col + 1, n);
    }
}

main() 
{
    int n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Pascal's Triangle using loops:\n");
    pascalLoop(n);

    printf("\nPascal's Triangle using recursion:\n");
    pascalRec(0, 0, n);

    return 0;
}
