//Author :D HARSHIT 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> sti;
typedef set<long> stl;
typedef set<char> stc;
typedef set<string> str;
typedef map<int, int> mpii;
typedef map<int, char> mpic;
typedef map<char, int> mpci;
typedef map<int, string> mpis;
typedef map<string, int> mpsi;
typedef map<string, string> mpss;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define ull unsigned long long
#define ll long long
#define int ll
using pii = pair<int, int>;
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n),b(n),c(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        for(int i=0;i<n;i++){
            int x=a[i];
            vector<pair<int,int>>pr;
            for(int j=0;j<n;j++)pr.push_back(make_pair(abs(a[j]-x),a[j]));
            sort(pr.begin(),pr.end());
            for(int i=0;i<n;i++)c.push_back(pr[i].second);
            if(c==b) cout<<i+1<<endl;
        }cout<<-1<<endl;
        int er=-1;
// int x,y,z,cnt=0;cin>>x>>y>>z;
// if(abs(x-y)==z) {cout<<0<<endl;continue;}
// if((x+y-z)%2!=0){cout<<-1<<endl;continue;}
// while(abs(x-y)!=z){
//     if(x>y){x--;y++;}
//     else {y--;x++;}
//     cnt++;
// }
// cout<<cnt<<endl;
// if(x<(y+z)&&y<(x+z)&&z<(x+y)) cout<<"yes";
// else cout<<"no";
    }
return 0;
}