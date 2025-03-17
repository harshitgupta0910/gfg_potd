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
bool isSubsetSum(vector<int>& arr, int k) {
    // code here
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(k + 1, false));
    for (int i = 0; i < n; i++) dp[i][0] = true;
    if (arr[0] <= k)  dp[0][arr[0]] = true;
    for (int ind = 1; ind < n; ind++) {
        for (int t = 1; t <= k; t++) {
            bool notTaken = dp[ind - 1][t];
            bool taken = false;
            if (arr[ind] <= t) {
                taken = dp[ind - 1][t - arr[ind]];
            }
            dp[ind][t] = notTaken || taken;
        }
    }
    return dp[n - 1][k];

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}