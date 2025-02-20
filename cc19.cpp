
/*     /\_/\  
*     ( o.o )  
*     (  _  )~  
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
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
#define MP make_i
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define ull unsigned long long
#define ll long long
#define int ll
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int, int> f;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            f[A[i]]++;
        }
        int od = 0;
        for ( auto& i:f) {
            if (i.second % 2 == 1) od++;
        }
        if(od>0)
        cout<< od<<endl; 
        else cout<< 1<<endl; 
    }
return 0;
}