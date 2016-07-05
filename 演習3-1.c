//演習3-1


#include <stdio.h>

int main (){

	int a,b;

	printf("input nomber 1\n");
	scanf("%d",&a);

	printf("input nomber 2\n");
	scanf("%d",&b);

	int max;

	max=0;

	if(b<a){
		max=a;

		printf("max=%d",max);
	}

	else {
		max=b;

		printf("max=%d",max);
	}


}