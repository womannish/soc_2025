#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int bit = 1;
    int m = pow(10,9) + 7;
    for (int i=1;i<=n;i++){
        bit = (2*bit)%m;
    }
    cout<< bit%m;
}