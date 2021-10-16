#include <stdio.h>

main(){
	int c;

	/* 
	getchar initializes c to character user inputs
	while c != EOF (End Of File)
		Enter loop
	*/	

	while((c = getchar()) != EOF){
		/*Print c w/ putchar*/
		putchar(c);
	}

}
