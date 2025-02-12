#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int x,y;cin>>x>>y;
        if(x+1==y)cout<<"Yes"<<endl;
        else if(x<=y)cout<<"No"<<endl;
        else if((x+1-y)%9==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }return 0;
    
}