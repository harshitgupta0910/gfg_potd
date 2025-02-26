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
stack<int> s, minS;
// Solution() {
// }
void push(int x) {
    s.push(x);
    if (minS.empty() || x <= minS.top()) minS.push(x);
}

void pop() {
    if (s.empty()) return;
    if (s.top() == minS.top()) minS.pop();
    s.pop();
}

int peek() {
    return s.empty() ? -1 : s.top();
}

int getMin() {
    return minS.empty() ? -1 : minS.top();
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}