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
class Node {
    public:
        int data;
        Node* left;
        Node* right;
    
        Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
    };
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int countPaths(Node* root, int k, long long currentSum, unordered_map<long long, int>& prefixSum) {
        if (!root) return 0;

        currentSum += root->data;
        int count = 0;
        if (prefixSum.find(currentSum - k) != prefixSum.end()) {
            count += prefixSum[currentSum - k];
        }

        prefixSum[currentSum]++;
        count += countPaths(root->left, k, currentSum, prefixSum);
        count += countPaths(root->right, k, currentSum, prefixSum);
        prefixSum[currentSum]--;

        return count;
    }

    int sumK(Node* root, int k) {
        unordered_map<long long, int> prefixSum;
        prefixSum[0] = 1;
        return countPaths(root, k, 0, prefixSum);
    }
return 0;
}