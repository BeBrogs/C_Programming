#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


main(){
	for (int f=UPPER; f != LOWER; f= f - STEP){
		printf("%3d F == %3.2f C\n", f, (5.0/9.0)*(f-32));
	}  



}


