//国語、社会、理科の３科目の合計と平均

#include<stdio.h>

int main()

{
	int k,s,r;
    int a;


	printf("input kokugo\n");
	scanf("%d",&k);

	printf("input shakai\n");
	scanf("%d",&s);

	printf("input rika\n");
	scanf("%d",&r);

	a=(k+s+r)/3;

	printf("your avrage= %d",a);

	return 0;


}