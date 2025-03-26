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
bool wordBreak(string &s, vector<string> &dictionary) {
    unordered_set<string> wordDict(dictionary.begin(), dictionary.end());
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true; 
    
    for (int i = 1; i <= n; ++i) {
        for (const string &word : dictionary) {
            int len = word.size();
            if (i >= len && dp[i - len] && s.substr(i - len, len) == word) {
                dp[i] = true;
                break; 
            }
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