#include <stdio.h>


main()
{
	int f;

	for(f = 0; f <= 300; f= f+20){
		printf("%4d F == %3.2f\n", f, (5.0/.90)*(f-32));
		

	}



}


/*
NOTES:
	printf to print

	Format strings:
		%3d == leave space for a (d)ecimal that spans over 3 characters

		%3.2f == leave space for a (f)loat of 3 integers and 2 floating point numbers


*/
