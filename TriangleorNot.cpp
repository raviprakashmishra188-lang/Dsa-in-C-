#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 digit number: ";
    cin>>a>>b>>c;
    if(a+b > c and b+c > a and a+c > b) cout<<"Valid Triangle";
    else cout<<"Invalid Triangle";
}