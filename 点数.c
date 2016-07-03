//点数


#include <stdio.h>

int main (){

	int x,y;

	printf("input No.1's score\n");
	scanf("%d",&x);

	printf("input No.2's score\n");
	scanf("%d",&y);


	if(x<y){

		printf("max: %d \n",y);
	}
	else if(x==y){

		printf("max: %d  %d \n",x,y);
	}

	else{
		printf("max: %d  \n",x);

	}

	return 0;


}