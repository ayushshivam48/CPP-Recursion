#include<iostream>
using namespace std;
int f(int p, int q){
    if (q==0) return 1;
    return p*f(p,q-1) ;
}
int main(){
    int p,q;
    cout<<"enter p: ";
    cin>>p;
    cout<<"enter q: ";
    cin>>q;
    cout<<f(p,q);
}