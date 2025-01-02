#include<iostream>
using namespace std;
void f(int num, int k){
    if(k==0)return;
    f(num,k-1);
    cout<<num*k<<" ";
}
int main(){
    int num,k;
    cout<<"Enter the no: "<<" ";
    cin>>num;
    cout<<"No of multiples: "<<" ";
    cin>>k;
    f(num,k);
}