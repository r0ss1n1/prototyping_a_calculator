#include <stdio.h>
#include <math.h>

/* Thanks Southern Cross Uni for giving me a chance at a BSc Mathematics. Dropped out. Don't regret my try */
/* May be room to reapply & tack this on my application */
/* I love you so much Tai. */
/* github.com/r0ss1n1 */
/* Charles Thomas Wallace Truscott, Byron Bay, NSW, Australia */

int main(void) {

	typedef struct Vector {
		int magnitude;
		int length;

		int i;
		int j;
		int k;

	} Vector;

	typedef struct Fraction {
		float numerator;
		float denominator;

	} Fraction;

	typedef struct Sum {
		int addend_1;
		int addend_2;

	} Sum;

	typedef struct Difference {
		int subtrahend_1;
		int subtrahend_2;

	} Difference;

	typedef struct Product {
		int product_1;
		int product_2;

	} Product;


	typedef struct Cartesian_Plane {

		int x_coordinate;
		int y_coordinate;
		
	} Cartesian_Plane;

	typedef struct Triangle {

		float opposite;
		float adjacent;
		float hypotenuse;

	} Triangle;

/*
	Triangle FS;

	printf("This program will calculate the ratio of sides of a triangle. Authored by Charles Truscott\n");
	printf("Enter the length of the opposite side, adjacent side & hypotenuse\n");
	printf("What is the length of the opposite side?\n");
	scanf("%f", &FS.opposite);
	printf("OK. What is the length of the adjacent side?\n");
	scanf("%f", &FS.adjacent);
	printf("What is the length of the hypotenuse?\n");
	scanf("%f", &FS.hypotenuse);
	printf("Opposite / Hypotenuse: %f\t Adjacent / Hypotenuse: %f\t Opposite / Adjacent: %f\t\n", FS.opposite / FS.hypotenuse, FS.adjacent / FS.hypotenuse, FS.opposite / FS.adjacent);

	printf("Angles: %f (arcsine) %f (arccosine) %f (arctangent)\n", asin(FS.opposite / FS.hypotenuse), acos(FS.adjacent / FS.hypotenuse), atan(FS.adjacent / FS.hypotenuse));
*/
	Fraction calculation_of_reciprocal;

	char calculation[100];
/* Finally got this loop to work, need to increment within the control structure test case evaluation not at the end of the loop, thinking ...
.. it will be necessary to add a few goto and break conditions, need to work in PEMDAS i.e. find ( read char array until find ) & add exponentiation ..
.. and reading int, float or double numbers evaluating two at a time e.g. (5.0 / 3.33 / 2.0) + 6.0 as (((((5.0 / 3.33) / 2.0)) + 6.0)) */

/* I love you Dad, Mark William Watters b. 1955 */

 
	scanf("%s", &calculation);
	for (int i = 0; calculation[i] != '\0';){
		if (calculation[i] == (char) '+') {
			printf("plus\n");
			++i;

		} else if (calculation[i] == (char) '-') {
			printf("minus\n");
			++i;

		} else if (calculation[i] == (char) '*') {
			printf("times\n");
			++i;

		} else if (calculation[i] == (char) '/') {
			printf("divided by\n");
			++i;

		}
	}

/* Someone in Byron Bay please hire me for PHP, Rails, Django, Python, or C/C++ or full-stack career */
/* Located in Suffolk Park / Byron Bay */

	return 0;

}