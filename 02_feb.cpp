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
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
     Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
class Solution {
  public:
vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> result;
        if (!root) return result;
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> levelNodes;

            for (int i = 0; i < levelSize; i++) {
                Node* node = q.front();
                q.pop();
                levelNodes.push_back(node->data);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(levelNodes);
        }

        return result;
    }
};
return 0;
}