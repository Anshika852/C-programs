#include<stdio.h>
int main(){
int p;
int r;
int t;

    printf(" enter p,r,t");
    scanf("%d %d %d",&p,&r,&t);

    int si = (p*r*t)/100;
    printf(" si is  %d ",si);
    return 0;
}  