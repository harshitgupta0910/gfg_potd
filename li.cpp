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
    int n,k;cin>>n>>k;
    vector<int>p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    vector<int>c(n);
    for(int i=0;i<n;i++) cin>>c[i];
    int ad=0,qw=0;
    for(int i=0;i<n;i++){
        if(c[i]==1) ad+=p[i];
    }
    for(int i=0;i<=n-k;i++){
        int crt = ad;
        for(int j=i; j<i+k; j++){
            if(c[j]==0)crt += p[j];
        }
        qw=max(qw, crt);
    }
    cout<< qw <<endl;
return 0;
}