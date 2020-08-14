#define _CRT_SECURE_NO_WARNINGS
//Trapezoid
#include <stdio.h>

typedef struct{
	double sideA;
	double sideB;
	double height;
} trapezoid;

int main()
{
	trapezoid myTrapezoid;
	printf("To find the area of the Trapezoid\n Enter the height followed by both of the sides of the trapezoid\n(separated by space) :");
	scanf("%lf %lf %lf",&myTrapezoid.height, &myTrapezoid.sideA, &myTrapezoid.sideB);

	if (myTrapezoid.height <= 0 || myTrapezoid.sideA <=0 || myTrapezoid.sideB <= 0) goto err;

	printf("\nThe area of the Trapezoid is \n 0.5 x %.2f x( %.2f + %.2f) \n = %.2f \n", myTrapezoid.height, myTrapezoid.sideA, myTrapezoid.sideB,0.5*myTrapezoid.height*(myTrapezoid.sideA+myTrapezoid.sideB));

	return 0;

err: printf("Error!");
}