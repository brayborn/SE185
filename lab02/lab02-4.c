/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C	    	 	 -
-	Name:Ben Rayborn														 -
- 	Section:1																 -
-	NetID:brayborn														     -
-	Date:01/28/2020															 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    int a = 6427;
	int b = 1725;
	int intAnswer = a + b;
	printf("A: int = 6427 + 1725 = %d\n", intAnswer);
	
	a = 6971;
	b = 3925;
	int c = 95;
	intAnswer = (a * b) - c;
	printf("B: int = (6971 * 3925) - 95 = %d\n", intAnswer);
	
	double x = 79;
	double y = 12;
	double z = 5;
	double doubleAnswer = x + y / z;
	printf("C: double 79 + 12 / 5 = %.2lf\n", doubleAnswer);
	
	x = 3640.0;
	y = 107.9;
	doubleAnswer = x / y;
	printf("D: double = 3640.0 / 107.9 = %.2lf\n", doubleAnswer);
	
	a = 22;
	b = 3;
	c = 3;
	intAnswer = (a / b) *c;
	printf("E: int = (22 / 3) * 3 = %d\n", intAnswer);
	
	a = 22;
	b = 3;
	c = 3;
	intAnswer = a / (b * c);
	printf("F: int = 22 / (3 * 3) = %d\n", intAnswer);
	
	x = 22;
	y = 3;
	z = 3;
	doubleAnswer = x / (y * z);
	printf("G: double = 22 / (3 * 3) = %.2lf\n", doubleAnswer);
	
	x = 22;
	y = 3;
	z = 3;
	doubleAnswer = x / y * z;
	printf("H: double = 22 / 3 * 3 = %.2lf\n", doubleAnswer);
	
	x = 22.0;
	y = 3;
	z = 3.0;
	doubleAnswer = (x / y) * z;
	printf("I: double = (22.0 / 3) * 3.0 = %.2lf\n", doubleAnswer);
	
	x = 22.0;
	y = 3;
	z = 3.0;
	intAnswer = x / (y * z);
	printf("J: int = 22.0 / (3 * 3.0) = %d\n", intAnswer);
	
	x = 22.0;
	y = 3.0;
	z = 3.0;
	doubleAnswer = x / y * z;
	printf("K: double = 22.0 / 3.0 * 3.0 = %.2lf\n", doubleAnswer);
	
	double circum = 23.567;
	double radius = circum / (2 * M_PI);
	double area = M_PI * (pow(radius, 2));
	printf("L: The area of a circle with circumference 23.567 = %.3lf\n", area);
	//area = (pi)*r^2 and circumference = 2*(pi)*r
	
	int feet = 14;
	double mpf = 0.3048;
	double meters = feet * mpf;
	printf("M: 14 feet = %.2lf meters.\n", meters);
	//single unit conversion, what do you want me to say about this??
	
	double tempF = 76;
	double tempC = (tempF - 32) / 1.8;
	printf("N: 76 degrees Fahrenheit = %.2lf Celsius.\n", tempC);
	//conversion was given in the lab instructions, once again what is there to say?

    return 0;
}