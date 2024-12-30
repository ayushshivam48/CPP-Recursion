#include<iostream>
using namespace std;
int f(int *arr,int idx, int n){
    if(idx==n-1) {
        return arr[idx];
    }
    return max(arr[idx],f(arr,idx+1,n));
}
int main(){
    int arr[5];
    int n=5;
    cout<<"Enter array elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<f(arr,0,5);
}