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
int matrixMultiplication(vector<int> &arr) {
    int n = arr.size();
 vector<vector<int>> dp(n, vector<int>(n, 0));
 for (int length = 2; length < n; length++) {
     for (int i = 1; i < n - length + 1; i++) {
         int j = i + length - 1;
         dp[i][j] = INT_MAX;
         for (int k = i; k < j; k++) {
             int cost = arr[i - 1] * arr[k] * arr[j] + dp[i][k] + dp[k + 1][j];
             dp[i][j] = min(dp[i][j], cost);
         }
     }
 }

 return dp[1][n - 1];

 }
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}