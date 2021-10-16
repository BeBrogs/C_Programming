#include <stdio.h>


main(){
	int c, f;
	
	int lower, upper, step;

	lower = 0;
	upper = 150;
	step = 10;

	f = lower;

	while (f <= upper){
		c = 5*(f-32)/9;
		printf("%d in C == %d in F\n", c, f);
		f = f + step;
	}



}
