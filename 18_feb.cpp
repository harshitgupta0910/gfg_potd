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
vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<pair<int, vector<int>>> maxHeap;
    
    for (auto& point : points) {
        int x = point[0], y = point[1];
        int dist = x * x + y * y; // Avoid computing sqrt for efficiency
        
        maxHeap.push({dist, point});
        
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    
    vector<vector<int>> result;
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    return result;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cout.tie(0);

return 0;
}