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
int maxPartitions(string &s) {
    // code here
    vector<int> a(26);
    for(int i=0;i<s.size();i++)
        a[s[i]-'a']=i;
    vector<int> ans;
    int i=0;
    while(i<s.size()){
        int j=i,k=a[s[i]-'a'];
        while(j<=k)
        k=max(k,a[s[j++]-'a']);
        ans.push_back(j-i);
        i=j;
    }
    return ans.size();
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}