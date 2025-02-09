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
    int nn, mm;
    cin >> nn >> mm;
    vector<int> aa(nn);
    for (int ii = 0; ii < nn; ii++)cin >> aa[ii];
    int bb;
    cin >> bb;
    vector<int> oo = aa;
    vector<int> tt(nn);
    for (int ii = 0; ii < nn; ii++) {
        tt[ii] = bb - aa[ii];
    }
    bool p = true;
    vector<int> v(nn);
    v[0] = min(oo[0], tt[0]);
    for (int ii = 1; ii < nn; ii++) {
        v[ii] = min(oo[ii], tt[ii]);
        if (v[ii] < v[ii - 1]) {
            v[ii] = max(oo[ii], tt[ii]);
            if (v[ii] < v[ii - 1]) {
                p = false;
                    break;
            }
        }
    } if (p) 
            cout << "YES\n";
        else 
            cout << "NO\n";
}
return 0;
}