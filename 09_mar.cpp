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
int countPS(string &s) {
            int n = s.size(),count = 0;
            vector<vector<bool>> dp(n, vector<bool>(n, false));
    
            for (int gap = 0; gap < n; gap++) {
                for (int i = 0; i < n - gap; i++) {
                    int j = i + gap;
                    if (gap == 0) {
                        dp[i][j] = true;
                    } else if (gap == 1) {
                        dp[i][j] = (s[i] == s[j]);
                    } else {
                        dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
                    }
                    if (dp[i][j] && gap >= 1) {
                        count++;
                    }
                }
            }
    
            return count;
    
        }
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}