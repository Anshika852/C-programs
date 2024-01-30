#include<iostream>
using namespace std;
int main(){
    // 1
    // 2 3
    // 3 4 5 
    // 4 5 6 7
    int n;
    cin>>n;
    int i =1;
     while(i<=n){
        int j =1;
        int count =1;
        while(j<=i){
           cout<<count<<" ";
           count=count+1;
           j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}