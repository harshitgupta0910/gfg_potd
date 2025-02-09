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

class Solution {
public:
    vector<int> assignGroups(vector<int>& gp, vector<int>& elmt) {
        int n = gp.size();
        vector<int> vv(n, -1);
        int qw = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < elmt.size(); j++) {
                if (gp[i] % elmt[j] == 0) {
                    vv[i] = j;
                    break;
                    //harshit is here
                }
            }
        }
        return vv;
    }
};
}