 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+96)<<" ";
        }
        cout<<endl;
    }
 }
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i%2 == 0) cout<<(char)(i+64)<<" ";
//            else cout<<(char)(i+96)<<" ";
//         }
//         cout<<endl;
//     }
//  }