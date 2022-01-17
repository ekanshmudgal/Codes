#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float disc, root1, root2, real, imag;   //discriminant
    
    printf("Enter the coeffient of x2:\n");
    scanf("%d", &a);

    printf("Enter the coeffient of x:\n");
    scanf("%d", &b);

    printf("Enter the value of constant:\n");
    scanf("%d", &c);

    disc = (b*b) - 4*a*c;

    printf("The discriminant of your quadratic equation is %.2f\n", disc);

    if( disc > 0)
        {
            root1 = (-b + sqrt(disc)) / 2 * a;
            root2 = (-b - sqrt(disc)) / 2 * a;

            printf("First root = %.2f\nSecond root = %.2f", root1, root2);
        }
    else if (disc == 0)
        {
            root1 = -b / 2*a;
            root2 = -b / 2*a;
            
            printf("As discriminant = 0\nFirst root = %.2f\nSecond root = %.2f", root1, root2);
        }
    else 
        {
            real = -b/2*a;
            imag = sqrt(-disc) / 2*a;

            printf("First root = %.2f + i%.2f\nSecond root = %.2f - i%.2f\n", real, imag, real, imag);
        }
}