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
int minJumps(vector<int>& arr) {
    // code here
    int n = arr.size();
    if (n <= 1) return 0;
    vector<int> jumps(n, -1);
    jumps[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (j + arr[j] >= i) {
                if (jumps[j] != -1) {
                    jumps[i] = (jumps[i] == -1) ? jumps[j] + 1 : min(jumps[i], jumps[j] + 1);
                }
            }
        }
    }
    //fgds
    return jumps[n - 1];

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}