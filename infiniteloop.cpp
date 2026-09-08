#include<iostream>
using namespace std;
int main(){
    // for(int i=1;i>0;i++){ // infinite baar chalega always true
    //     cout<<"Hello"<<endl;
    // }
    while(0){
        cout<<"shreya and ganesh"<<endl;
    }
}
// #include<iostream>
// using namespace std;
// int main(){
//     int t=10;
//     while(t/=2){
//         cout<<"hello"<<endl;

//     }
// } 
//     | Iteration | `t /= 2` के बाद `t` | Condition          | Output   |
// | --------- | ------------------: | ------------------ | -------- |
// | शुरू      |                  10 | -                  | -        |
// | 1         |      10 / 2 = **5** | `while(5)` → true  | hello    |
// | 2         |       5 / 2 = **2** | `while(2)` → true  | hello    |
// | 3         |       2 / 2 = **1** | `while(1)` → true  | hello    |
// | 4         |       1 / 2 = **0** | `while(0)` → false | Loop बंद |
