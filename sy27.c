#include<stdio.h>

#include<math.h>

int main(){

       double x0,y0,A,B,C,r;

       scanf("%lf%lf",&x0,&y0);

       scanf("%lf%lf%lf",&A,&B,&C);
       
       r=fabs(A*x0+B*y0+C)/sqrt(pow(A,2)+pow(B,2));
       

       printf("%f",r);

       return 0;

} 

