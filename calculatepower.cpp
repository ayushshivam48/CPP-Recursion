#include<iostream>
#include<cmath>
using namespace std;
int pow(int a, int n){
    if (n==0)return 1;
    return a*(pow(a,n-1));
}
int main(){
    int a,n;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter n: ";
    cin>>n;
    cout<<"a^n: "<<pow(a,n);
}