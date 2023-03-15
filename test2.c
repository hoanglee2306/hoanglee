#include<stdio.h>
int getRelpos(double x, double y, double r){
	double d2=x*y + y*y;
	dou3ble r2=r*r;
	if(d2<r2) return 1;
	else if(d2==r2) return 0;
	return -1; //d^2>r^2-> the point is out of the circle
}

main(){
	double x,y,r;
	 printf("Enter the point(x,y):");
	 scanf("%lf  %lf", &x, &y);
	do{
		printf("Enter the circle(r): ")
		scanf("%lf", &r)
		}while(r<0)
	int result = getRelpos(x,y,r);
	if(result==1) printf("The point is the circle");
	else if(result==0) printf("The point is on the circle");
	else printf("The point is out of circle");
}
