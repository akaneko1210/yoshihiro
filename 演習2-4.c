//課題2-4

#include <stdio.h>
#include <math.h>

double culcrate(double r,double x);

int main(){

	double a,b;

	printf("V0=");

	scanf("%lf",&a);

	printf("radian=");
	scanf("%lf",&b);

	printf("vy=%3.3f",culcrate(a,b));

	return 0;

}

double culcrate(double r,double x){

	double z;

	z=r*sin(x);

	return z;
}