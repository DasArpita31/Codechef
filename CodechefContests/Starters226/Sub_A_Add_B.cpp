#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,A,B;
        cin>>N>>A>>B;

        if(N<A){
            cout<<N<<endl;
        }
        else{
    
            while(N>=A){
                N=N-(A-B);
               if(N<A){
                break;
               }
            }
            cout<<N<<endl;
        }
    }
}
