#include<stdio.h>
#include<conio.h>

void main()
{
    int a[6] = {7, 2, 4, 1, 5, 3}, i, value, pos;

    printf("The array is:\n");
    for (int k=0; k<6; k++)
    {
        printf("%d\t", a[k]);
    }printf("\n");

    for(i = 1; i<6; i++)
    {
        value = a[i];
        pos = i;

        while (pos >= 0 && (a[pos-1]>value))
        {
            a[pos] = a[pos-1];
            pos--;
        }

        a[pos] = value;
    }

    printf("The sorted array using insertion sort is:\n");
    for(int k=0; k<6; k++)
    {
        printf("%d\t", a[k]);
    }printf("\n");
}

