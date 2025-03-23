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
int countWays(string &s) {int n = s.size();
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = (s[0] != '0') ? 1 : 0;

    for (int i = 2; i <= n; i++) {
        if (s[i - 1] != '0') {
            dp[i] += dp[i - 1];
        }
        if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6')) {
            dp[i] += dp[i - 2];
        }
    }
    return dp[n];
    }
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}