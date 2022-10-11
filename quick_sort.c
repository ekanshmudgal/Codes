#include <stdio.h>
#include <conio.h>

void quicksort(int a[10], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i=first;
        j=last;

        while (i<j)
        {
            while(a[i] <= a[pivot] && i<last)
                i++;
            while(a[j] > a[pivot])
                j--;

            if(i<j)             // internal swapping
            {
                temp = a[i];
                a[i] = a[j]; 
                a[j] = temp; 
            }
        }

        // while i > j          swap pivot with a[last]
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;            //pivot is now at it's perfect position
    }  

    quicksort(a, 0, j-1);       //recursively called for elements less than pivot

    quicksort(a, j+1, last);    //recursively called for elements greater than pivot
}

int main()
{
    int a[10], n, i;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n-1);       //array is now sorted

    printf("Sorted elements using quicksort method are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}