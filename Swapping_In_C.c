#include <stdio.h>
int main()
{
    int a, b;
    printf("\t\t <- To Swap Two Numbers -> \n\t\t ************************* \n");
    printf("Enter 1 number : ");
    scanf("%d", &a);
    printf("Enter 2 number : ");
    scanf("%d", &b);
    printf("Befor Swapping : \n\t a = %d \tb = %d", a, b);
    printf("\n\tAddress of a = %d  \n\tAddress of b = %d", &a, &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping : \n");
    printf("\ta = %d \t\tb = %d", a, b);
    printf("\n\tAddress of a = %d  \n\tAddress of b = %d", &a, &b);
    return 0;
}