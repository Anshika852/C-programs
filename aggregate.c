#include<stdio.h>
int main(){
        int s1, s2, s3, s4, s5 , total = 500;
        printf("enter subjects marks ");
        scanf("%d %d %d %d %d", &s1 ,&s2, &s3, &s4, &s5);

        int sum = s1+s2+s3+s4+s5;
        printf(" sum is: %d \n ",sum);


        float aggregate = sum/total;
        printf("aggregate is : %f \n",aggregate);

        return 0;
}