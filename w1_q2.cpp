#include<bits/stdc++.h>
using namespace std;

void Rep(string s){
    int count,best;
    count = 1;
    best = 1;
    int len = s.size();
    for(int i=0;i<len;i++){
        if(s[i]==s[i+1]) {
            count++;
            best = max(best,count);
        }
        else {
            count = 1;
        };
        
    }
    
    cout<<best;
}

int main(){
    string s;
    cin>>s;
    Rep(s);
    return 0;
}