#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
bool flag = false; // false means prime
for(int i=2;i*i<=n;i++){
    if(n%i == 0){ // factor mil gya except 1 and n
        flag = true;
        break;
    }
}
if(flag == true) cout<<"composite number";
else cout <<"prime number";
}
