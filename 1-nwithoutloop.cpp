#include<iostream>
using namespace std;
void f(int n){
    if(n<1)return;
    f(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter the no: "<<" ";
    cin>>n;
    f(n);
}