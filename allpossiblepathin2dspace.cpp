#include<iostream>
using namespace std;
int f(int i , int j , int m , int n){
    if(i==m-1&&j==n-1) return 1;
    if(i>=m||j>=n) return 0;
    return f(i,j+1,m,n)+f(i+1,j,m,n);
}
int main(){
    cout<<"No of possible ways: "<<f(0,0,4,4);
}