#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a real no: ";
    cin>>x;
    int y = (int)x;
    if( x == y ) cout<<"Integer";
    else cout<<"Not an Integer";
    
