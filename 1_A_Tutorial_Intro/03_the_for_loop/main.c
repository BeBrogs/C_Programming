#include <stdio.h>


main(){
	int f;


	for (f = 0; f <= 300; f = f + 20){
		printf("%6d F == %3.1f\n", f, (5.0/9.0)*(f-32));

	}



}
