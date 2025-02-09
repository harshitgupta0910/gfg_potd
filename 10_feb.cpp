// Author: D HARSHIT  
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define print(x) cout << x << '\n'

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:
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
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(5);

    Solution sol;
    int k = 3;
    print(sol.sumK(root, k));

    return 0;
}
