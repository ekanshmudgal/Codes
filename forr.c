#include <stdio.h>
void main()
{
    int num;
    printf("Printing the first N natural numbers till\?\n");
    scanf("%d", &num);

    for (int a=0; a<num; a++)
    {
        printf("The value of a is %d\n", a);
    }
}