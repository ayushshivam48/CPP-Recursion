#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a)return gcd(b,a);
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter a: "<<" ";
    cin>>a;
    cout<<"Enter b: "<<" ";
    cin>>b;
    cout<<gcd(a,b)<<endl;
}