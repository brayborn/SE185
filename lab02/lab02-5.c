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
#include <math.h>   // Google this header file to learn more! :)

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    double a, b, c;
    double filler;

    /* Put your code after this line */
	printf("Enter side a: \n");
	scanf("%lf", &a);
	printf("Enter side b: \n");
	scanf("%lf", &b);


    /* This next line will calculate the square root of whatever value is
     * inside the parenthesis and assigns it to the variable filler. */
    filler = sqrt(pow(a, 2) + pow(b, 2));
	
	printf("Side c = %.2lf", filler);

    return 0;
}
