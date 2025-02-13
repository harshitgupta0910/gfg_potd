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
#define mP make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define ull unsigned long long
#define ll long long
#define int ll
using pii = pair<int, int>;
vector<vector<int>> fmc(const vector<int>& B, int m) {
    vector<int> t = B;
    vector<vector<int>> v;
    vector<vector<int>> xc;
    for (int i = 0; i <m; i++) {
        v.push_back(t);
        rotate(t.begin(), t.begin()+1,t.end());
    }
    sort(v.begin(), v.end());
    return v;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> A(n);
        unordered_set<int> B;
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        for (int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            B.insert(x);  
        }
        bool as = false;
        for (int i = 0; i < n; ++i) {
            if (B.find(A[i]) == B.end()) {
                cout << 1 << endl;
                cout << A[i] << endl;
                as = true;
                break;
            }
        }
        if (!as) 
            cout << -1 << endl;
    }
    }
return 0;
}