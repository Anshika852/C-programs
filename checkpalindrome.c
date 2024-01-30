// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[6]="kasak ";
//     char s2[6];
//     int j =0;

//      for(int i = strlen(s1)-1;i>=0;i--){
//            s2[j]=s1[i];
//            j=j+1;

//      }s2[j]='\0';
//      if(strcmp(s1,s2)==0){
//         printf("it is a palindrome ");

//      }
//      else{
//         printf("it is not a palindrome ");
//      }
//     }
#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // Palindrome
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isPalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}

