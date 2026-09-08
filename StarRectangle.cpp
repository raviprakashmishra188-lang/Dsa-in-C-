#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows and columns: ";
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    }

//     for(int i=1;i<=2;i++){
//         for(int j=1;j<=3;j++){
//             cout<<"*";
//         }
//         cout<<rndl;
//     }
// }