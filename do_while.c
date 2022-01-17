#include <stdio.h>
void main()
{
    int a=0;
    printf("The first value of a is %d.\n", a);

    printf("The next values are:\n");

    do
    {
        a++;
        printf("%d\n", a);
    } 
    while(a<=10);
}