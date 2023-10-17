#include<stdio.h>
#include<math.h>
int main (){
    float p, r,t;
    printf("enter p,r,t");
    scanf("%f %f %f",&p,&r,&t);


    float CI = p *( pow((1 + r / 100), t));
    printf(" CI is :%f",CI);
    return 0;
    
}