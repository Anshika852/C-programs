#include<stdio.h>
int main(){
    int f ,c ;
    printf("enter f ");
    scanf("%d",&f);

    c = (f - 32) * 5 / 9 ;
    printf(" temp is %d ",c);
    return 0;
}