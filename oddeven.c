#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf("even number %d",n%2==0);
    printf("odd number %d",n%2!=0);
    return 0;
}