//階段　九九

#include <stdio.h>

int main (){

	int i,j;


	for(i=0;i<10;i++){
		for(j=0;j<i+1;j++){
			printf("*");
		}
		printf("\n");
	}

	for(i=0;i<10;i++){
		for(j=0;j<10-i;j++){
			printf("*");
		}
		printf("\n");
	}


	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			printf("%3d",i*j);
		}
		printf("\n");
	}


	return 0;
}