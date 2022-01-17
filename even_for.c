#include <stdio.h>
void main()
{
    int num;

    printf("Printing even numbers till\?\n");
    scanf("%d", &num);

    for (int a=0; a<num; a++)
    {
        if(a%2==0)
        {
            printf("%d\n", a);
        }
    }
}