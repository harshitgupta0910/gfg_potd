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
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        priority_queue<int,vector<int>,greater<int>>pq;
        for (int i=0;i<n;i++) {
            int x;cin>>x; pq.push(x);
        }
        while (pq.size()>1) {
            int a = pq.top();pq.pop();
            int b = pq.top();pq.pop();
            pq.push(a+b-1);
            int ty = -1;
        }
        cout<<pq.top()<<endl;
    }
return 0;
}