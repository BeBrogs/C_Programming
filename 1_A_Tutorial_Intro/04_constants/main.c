#include <stdio.h>


#define LOWER 0 	/*Setting lower to 0*/
#define UPPER 300	/*Setting upper const to 300*/
#define STEP 20		/*Setting step const to 20*/

main(){
	printf("LOWER: %d\n", LOWER);
	printf("UPPER: %d\n", UPPER);
	printf("STEP: %d\n", STEP);


	for(int f = 0; f<=UPPER; f = f + STEP){
		printf("%3d F == %3.2f\n", f, (5.0/9.0)*(f-32));
	}



}


