#include<stdio.h>
int main(){
    int a ,b ;
    printf("enter two no.");
    scanf("%d %d ",&a,&b);

    int sum = a+b;
    int sub =a-b;
    int pro = a*b;
    int divide= a/b;
    printf("sum is :%d \n",sum);
    printf("sub is :%d \n",sub);
    printf("pro is :%d \n",pro);
    printf("divide is :%d\n",divide);
    return 0;
} 