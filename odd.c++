#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements in array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];      
    }
    int count1=0, count2=0;
    for(int i=0;i<5;i++){
        if (arr[i] % 2 == 0) {
            count1++;
        } else {
            count2++;        

    }

}
cout<< count1 << " even numbers in the array." << endl;
cout<< count2 << " odd numbers in the array." << endl;
}
