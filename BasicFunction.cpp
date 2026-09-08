#include<iostream>
using namespace std;
void anuj(){
    cout<<"Hi Anuj"<<endl;
}
void arjun(){
    anuj();
    cout<<"Hi Arjun"<<endl;
}
void anu(){
    cout<<"Hi Anu"<<endl;
     arjun();
}
int main(){ 
    
   
    anu();

}