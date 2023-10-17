#include<stdio.h>
#define PI 3.14f 
int main (){
    float radius, perimeter, area ;
    printf( "enter radius");
    scanf("%f",&radius );

     perimeter = 2  * PI* radius;
    printf("print perimeter : %f \n",perimeter);

    area = PI* radius *radius ;
    printf("print area :%f",area);
    return 0;
}