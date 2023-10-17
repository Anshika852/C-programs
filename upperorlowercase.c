#include<stdio.h>
int main(){
    char ch ;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>= 'A' && ch<='Z'){
        printf("character is uppercase");
    }
    else if(ch>='a' && ch<='z'){
        printf("charcter is lowercase");
    }
    else{
        printf("integer value");
    }
}