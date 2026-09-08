#include<iostream>
using namespace std;
void fun(int age = 26){
    cout<<"My age is "<<age<<endl;
}
int main(){
    fun(43);
}