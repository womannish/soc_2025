#include <bits/stdc++.h>
using namespace std;

void Miss(int n, int arr[]){
    sort(arr,arr+n-1);
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for (int i = 0;i<n-1;i++){
        cin>>arr[i];
    }
    Miss(n, arr);
    return 0;
}