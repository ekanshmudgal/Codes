#include <stdio.h>
void main()
{
    int num2, num1;

    printf("Printing even numbers from\?");
    scanf("%d", &num2);

    printf("to\?");
    scanf("%d", &num1);

    for(int a=num2; a>=num1; a--)
        if (a%2==0)
            {
                printf("%d\n", a);
            }
}