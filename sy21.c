#include<stdio.h>
int main(){
	double x,y;
	printf("x:\n");
	scanf("%lf",&x);
	if(x<=100)
		y=0.51*x;
	if(x>100)
		y=0.65*x;
	printf("y=f(%.2lf)=%.2lf",x,y);
	return 0;		
		
	
	
}

