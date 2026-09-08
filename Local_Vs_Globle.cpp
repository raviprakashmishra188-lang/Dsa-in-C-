#include<iostream>
using namespace std;
int x=10; //global variable
void change(){
    x = 45;
}
int main(){
    
    int x = 80;
    cout<<x<<endl;
    change();
    cout<<x<<endl;    
}