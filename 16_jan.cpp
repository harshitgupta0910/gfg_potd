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
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
class Solution {
  public:
    int maxLen(vector<int> &arr) {
    unordered_map<int, int> ps;
    int maxLength = 0;
    int pp = 0;

    ps[0] = -1;

    for (int i = 0; i < arr.size(); ++i) {
        pp += (arr[i] == 0) ? -1 : 1;

        if (ps.find(pp) != ps.end()) {
            maxLength = max(maxLength, i - ps[pp]);
        } else {
            ps[pp] = i;
        }
    }

    return maxLength;
    }
};
return 0;
}