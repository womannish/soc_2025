#include<bits/stdc++.h>
using namespace std;

void Algo(long long n){
    cout<<n<<" ";
    while(n>1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }  
        cout<<n<<" ";
    }
}
int main(){
    long long n;
    cin>>n;
    Algo(n);
    return 0;
}