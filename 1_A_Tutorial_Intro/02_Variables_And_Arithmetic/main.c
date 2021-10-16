/*

Use formula
C = (5/9)(F-32) 
to print conversion table between C and F

*/


#include <stdio.h>

main(){
	int f, c;

	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	f = lower;	
	while(f <= upper){
		c = 5*(f-32)/9;
		printf("%d in F == %d in c\n", f,c);

		f = f + step;
	

	}


}
