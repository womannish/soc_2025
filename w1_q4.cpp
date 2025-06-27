#include<bits/stdc++.h>
using namespace std;

void gondola(int n,int x,int arr[]){
    sort(arr,arr+n);
    int count = 0;
    int left = 0; int right = n-1;
    while(left<=right){
        if(arr[left]+arr[right]>x){
            count++;
            right--;
        }
        else{
            count++;
            right--;
            left++;
        }
    }
    cout<<count;
}

int main(){
    int n, x;
    cin>>n>>x;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    gondola(n,x,arr);
    return 0;
}