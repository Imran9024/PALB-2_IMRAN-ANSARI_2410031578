
#include<iostream>
using namespace std;
int main(){
    int arr[5], key, count=0;
    cout<<"Enter the element in array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element which you want to count: ";
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<count<<"Times";
    return 0;
}