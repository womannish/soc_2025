#include<bits/stdc++.h>
using namespace std;

void twoSum(int n,int x,vector<int> arr){
    map<long,vector<int>>m;
    for(int i=0;i<n;i++){
        m[arr[i]].push_back(i);
    }
    sort(arr.begin(),arr.end());
    int left = 0; int right = n-1; int ct = 0;
    while (left<right){
        if(arr[left]+arr[right]>=x){
            if(arr[left]+arr[right]==x & arr[left]==arr[right]){
                cout<<m[arr[left]][0]+1<<" "<<m[arr[left]][1]+1;
                ct++;
                break; 
            }
            if(arr[left]+arr[right]==x & arr[left]!=arr[right]){
                cout<<m[arr[left]][0]+1<<" "<<m[arr[right]][0]+1;
                ct++;
                break;
            }
            else{
                right--;
            }
        }
        else{
            left++;
        }
    }
    if(ct==0) cout<<"IMPOSSIBLE";
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    twoSum(n,x,v);
    return 0;
}