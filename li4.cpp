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
    int t; cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int>v(26);
        for (int i=0;i<26;i++)cin>>v[i];
        set<string> r;
        string s = "";
        function<void(int)> back = [&](int idx) {
            if (s.length()==n) {
                r.insert(s);
                return;
            }

            for (int i = 0; i < 26; ++i) {
                if (v[i] > 0) {
                    s.push_back('A' + i);
                    v[i]--;
                    back(i);
                    v[i]++;
                    s.pop_back();
                }
            }
        };
        back(0);
        if (r.empty()) {
            cout << -1 << endl;
        } else for (auto &i:r) cout <<i<< endl;
    }

    return 0;
}
