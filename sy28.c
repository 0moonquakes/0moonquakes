#include<stdio.h>

#include<math.h>

int main(){

       int flag=1;//flag=1,circular;flag=0,no circular
       int i,j,k;

       double A,B,D,E,F;

       scanf("%lf%lf%lf%lf%lf",&A,&B,&D,&E,&F); //输入方程的5个参数
       pow(A+D/2,2)+pow(B+E/2,2)==pow(D,2)+pow(E,2)-4*F/4;

       if(pow(D,2)+pow(E,2)-4*F<0){
	   

              flag=0;
              
              printf("No circle");
          }
              
       else{

              flag=1;

              if(pow(D,2)+pow(E,2)-4*F==0){

                     flag=1;
                     printf("Center of a circle is(%.2f,%.2f)\n",i);

              }

       }

       if(pow(D,2)+pow(E,2)-4*F>0){
       			flag=1;

              printf("Center of a circle is(%.2f,%.2f)\n",j);

              printf("Radius of the circle is %.2f\n",k);

       }

       else{

              printf("No circle");

       }
	return 0;
}
