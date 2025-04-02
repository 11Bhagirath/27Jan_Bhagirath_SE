#include <stdio.h>
main()
{
    int number = 10;  
    int *ptr = &number; 

    printf("Original value of number: %d\n", number);

    *ptr = 20;

    printf("Modified value of number: %d\n", number);
}
