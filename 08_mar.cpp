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
string longestPalindrome(string &s) {
    // code here
int n = s.length();
if (n < 2) return s;
 vector< vector<bool>> dp(n,  vector<bool>(n, false));
int start = 0, maxLen = 1;
for (int i = 0; i < n; ++i) dp[i][i] = true;
for (int i = 0; i < n - 1; ++i) {
    if (s[i] == s[i + 1]) {
        dp[i][i + 1] = true;
        start = i;
        maxLen = 2;
    }
}
for (int len = 3; len <= n; ++len) {
    for (int i = 0; i <= n - len; ++i) {
        int j = i + len - 1;
        if (s[i] == s[j] && dp[i + 1][j - 1]) {
            dp[i][j] = true;
            if (len > maxLen) {
                start = i;
                maxLen = len;
            }
        }
    }
}

return s.substr(start, maxLen);
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}