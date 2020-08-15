#define _CRT_SECURE_NO_WARNINGS
//Trapezoid Area and its perimeter
#include <stdio.h>
#include <math.h>

typedef struct
{
    double sideA;
    double sideB;
    double height;

} trapezoid;

double trapezoidArea(double h, double a, double b)
{
    double result = 0.5 * h * (a + b);
    return result;
}

int main()
{
    trapezoid myTrapezoid;
    printf("To find the area and it's perimeter of the Trapezoid\n");
    printf("Enter the height followed by both sides of the trapezoid\n");
    printf("(separated by space) : ");

retry:
    scanf("%lf %lf %lf", &myTrapezoid.height, &myTrapezoid.sideA, &myTrapezoid.sideB);

    if (myTrapezoid.height <= 0 || myTrapezoid.sideA <= 0 || myTrapezoid.sideB <= 0 )
    {
        printf("Input must be number and greather than 0\n");
        printf("try again: ");
        goto retry;
    }
    if (myTrapezoid.sideA == myTrapezoid.sideB)
    {
        printf("The both of the sides must not be equal!");
        printf("\ntry again: ");
        goto retry;
    }
    printf("\nThe area of the trapezoid is \n 0.5 x %.2f x( %.2f + %.2f) \n = %.2f \n", myTrapezoid.height, myTrapezoid.sideA, myTrapezoid.sideB, trapezoidArea(myTrapezoid.height, myTrapezoid.sideA, myTrapezoid.sideB));
    
    return 0;
}