#include<bits/stdc++.h>
using namespace std;

void Stick(long n,long arr[]){
    sort(arr,arr+n);
    long sum = 0;
    long median = arr[n/2];
    for(int i=0;i<n;i++){
        if(arr[i]<median){
            sum += median-arr[i]; 
        }
        else{
            sum += arr[i]-median;
        }
    }
    cout<<sum;
}

int main(){
    long n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Stick(n,arr);
    return 0;
}