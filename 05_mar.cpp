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
int longestStringChain(vector<string>& words) {
    // Code here
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
    unordered_map<string, int> dp;
    int mln = 0;
    for (const string& word : words) {
        dp[word] = 1;
        for (int i = 0; i < word.length(); i++) {
            string pred = word.substr(0, i) + word.substr(i + 1);
            if (dp.find(pred) != dp.end()) {
                dp[word] = max(dp[word], dp[pred] + 1);
            }
        }
        mln = max(mln, dp[word]);
    }

    return mln;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}