#include<stdio.h>
int main(){
    // swapping of two no. using third variable 
    int  a;
    int b;
     printf("enter a ");
     scanf("%d",&a);
     printf("enter b ");
     scanf("%d",&b);


    int temp= b;
     b = a;
     a = temp;

     printf("swap of two no. is:a = %d,b= %d" , a,b);
     return 0;


}