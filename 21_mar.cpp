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
int findMaxSum(vector<int>& arr) {
    // code here
    int n = arr.size();
if (n == 0) return 0;
if (n == 1) return arr[0];
if (n == 2) return max(arr[0], arr[1]);

vector<int> dp(n);
dp[0] = arr[0];
dp[1] = max(arr[0], arr[1]);

for (int i = 2; i < n; i++) {
    dp[i] = max(dp[i-1], dp[i-2] + arr[i]);
}
return dp[n-1];
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}