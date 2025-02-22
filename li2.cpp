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
int qw(vector<int>& h) {
    int n = h.size();
    vector<int> dt(n, INT_MAX);
    dt[0] = 0;
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int u = q.front();q.pop();
        if (u == n - 1)return dt[u];
        if (u + 1 < n && h[u + 1] != -1 && dt[u + 1] == INT_MAX) {
            dt[u + 1] = dt[u] + 1;
            q.push(u + 1);
        }
        if (u + h[u] < n && h[u + h[u]] != -1 && dt[u + h[u]] == INT_MAX) {
            dt[u + h[u]] = dt[u] + 1;
            q.push(u + h[u]);
        }
    }
    return -1;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i)cin >> h[i];
    cout << qw(h) << endl;
    return 0;
}
