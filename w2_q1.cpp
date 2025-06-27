#include<bits/stdc++.h>
using namespace std;

void Playlist(int n,int arr[]){
    map<int,int> mpp;
        for(int i=0;i<n;i++){
        mpp[arr[i]] = i;
    }
}
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Playlist(n,arr);
}