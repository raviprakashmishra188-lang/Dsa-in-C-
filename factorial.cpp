#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    long long fact = 1;  // int main keval 12 13 tak sayd niklta hai
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
}