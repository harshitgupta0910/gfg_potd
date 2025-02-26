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
vector<int> maxOfMins(vector<int>& arr) {
    // Your code here
     int n = arr.size();
    vector<int> left(n);
    vector<int> right(n);
    
    stack<int> st;
    for(int i = 0; i < n; i++) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        left[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    
    while(!st.empty()) st.pop();
    
    for(int i = n-1; i >= 0; i--) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        right[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    
    vector<int> ans(n + 1, 0);
    
    for(int i = 0; i < n; i++) {
        int len = right[i] - left[i] - 1;
        ans[len] = max(ans[len], arr[i]);
    }
    
    for(int i = n-1; i >= 1; i--) {
        ans[i] = max(ans[i], ans[i+1]);
    }
    
    vector<int> result(n);
    for(int i = 0; i < n; i++) {
        
        result[i] = ans[i+1];
    }
    
    return result;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}