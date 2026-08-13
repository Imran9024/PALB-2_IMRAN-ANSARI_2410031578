//Write a program to count even and odd number.
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements in array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];      
    }
    int even=0, odd=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            even=even+1;        
        }
        else{
            odd=odd+1;
        }
    }
    cout<<"Total even numbers in array: "<<even<<endl;
    cout<<"Total odd numbers in array: "<<odd;
    return 0;
}