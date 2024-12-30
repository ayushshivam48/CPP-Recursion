#include<iostream>
using namespace std;
void f(int *arr,int idx, int n){
    if(idx==n) return;
    cout<<arr[idx]<<endl;
    f(arr,idx+1,n);
}
int main(){
    int arr[5];
    int n=5;
    cout<<"Enter array elements: ";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    
    f(arr,0,n);
}