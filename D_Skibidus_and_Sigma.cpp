

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
#define int long long
#define vi vector<int>
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
int tt;
    cin >> tt;

    while (tt--) {
        int nn, mm;cin >> nn >> mm;
        vector<vi> aa(nn);
        vector<int> bb(nn);
        for (int ii = 0; ii < nn; ii++) {
            aa[ii].resize(mm);
            bb[ii] = 0;
            for (int jj = 0; jj < mm; jj++) {
                cin >> aa[ii][jj];
                bb[ii] += aa[ii][jj];
            }
        }
        vector<int> cc(nn);
        iota(cc.begin(), cc.end(), 0);
        sort(cc.begin(), cc.end(), [&](int ii, int jj) {
            return bb[ii] > bb[jj];
        });
        int dd = 0,ee = 0;
        for (int ii = 0; ii < nn; ii++) {
            int ff = cc[ii];
            for (int jj = 0; jj < mm; jj++) {
                ee += aa[ff][jj];
                dd += ee;
            }
        }
        cout << dd << "\n";
    }
return 0;
}