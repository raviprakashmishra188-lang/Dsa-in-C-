#include <iostream>
using namespace std;
int main(){
    int n,r ;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    
    int nFact = 1;
    for(int i=1;i<=n;i++){
        nFact *= i;
    }
    int rFact = 1;
    for(int i=1;i<=r;i++){
        rFact *= i;
    }
   int nrFact=1;
    for(int i=1;i<=n-r;i++){
        nFact *= i;
    }
    int ncr = nFact/(rFact*nrFact);
    cout<<ncr<<endl;
}
