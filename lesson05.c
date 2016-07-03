//配列

 #include <stdio.h>

 int main (){


 	int a[10]={1,2,3,4,5,6,7,8,9,10};

 	int e,b,i;

 	e=0;

 	for(i=0;i<10;i++){
 		e=e+a[i];
 	}

 	b=e/10;

 	printf("e;%4d\n",e);
 	printf("b:%4d\n",b);

 }