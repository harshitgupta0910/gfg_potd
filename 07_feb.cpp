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

Node* newNode(int val) {
    return new Node(val);
}

class Solution {
public:
    int ans;

    int diameter(Node* root) {
        ans = 1;
        depth(root);
        return ans - 1;
    }

    int depth(Node* node) {
        if (node == NULL) return 0;
        int L = depth(node->left);
        int R = depth(node->right);
        ans = max(ans, L + R + 1);
        return 1 + max(L, R);
    }
};
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inorderTraversal(Node* node, vector<int>& result) {
        if (node == NULL) return;
        inorderTraversal(node->left, result);
        result.push_back(node->data);
        inorderTraversal(node->right, result);
    }
    vector<int> inOrder(Node* root) {
       vector<int> result;
        inorderTraversal(root, result);
        return result;
    }
};
return 0;
}