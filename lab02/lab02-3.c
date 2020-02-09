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

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    int integer_result;
    double decimal_result;

    integer_result = 77 / 5;
    printf("The value of 77/5 is %d, using integer math.\n", integer_result);
	//This used %lf where %d should be used for integers.

    integer_result = 2 + 3;
    printf("The value of 2+3 is %d.\n", integer_result);
	//This didn't state the variable being referenced.

    decimal_result = 1.0 / 22.0;
    printf("The value 1.0/22.0 is %lf.\n", decimal_result);
	//This used %d where %lf should be used for doubles.

    return 0;
}
