#include <stdio.h>
#include <math.h>

int is_armstrong(int num) 
{
    int originalNum = num, sum = 0, digits = 0;
    
    int temp = num;
    while (temp > 0) 
	{
        temp /= 10;
        digits++;
    }
      
    temp = num;
    while (temp > 0)
	 {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    return (sum == originalNum);
}

main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (is_armstrong(num)) 
	{
        printf("%d is an Armstrong number.\n", num);
    } else 
	{
        printf("%d is not an Armstrong number.\n", num);
    }
    
    
    printf("Armstrong numbers between 1 and 1000: ");
    for (int i = 1; i <= 1000; i++) 
	{
        if (is_armstrong(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
