//配列


#include <stdio.h>
int main (){
	int a[10],i,sum;
	int max=a[0];
	int min=a[0];


	printf("input score\n");

	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<10;i++){
		sum+=a[i];

	}

	if (a[i]>max){
		max=a[i];
	}

	if (a[i]<max){
		min=a[i];
	}

	printf("sum:%4d\n",sum);
	printf("max:%4d\n",max);
	printf("min:%4d\n",min);


	return 0;

}


