//演習3-2

#include <stdio.h>

int main(){

	char a;

	scanf("%c",&a);

	if(a>='A'&&a<='Z'){
		printf("%c",a);
	}

	else if(a>='a'&&a<='z'){
		printf("%c" ,a-32);
	}

	return 0;
}