// URL: https://leetcode.com/problems/count-good-nodes-in-binary-tree/
// Run result: Runtime: 412 ms, faster than 33.33% of C++ online submissions for Count Good Nodes in Binary Tree.
//             Memory Usage: 86.4 MB, less than 100.00% of C++ online submissions for Count Good Nodes in Binary Tree.
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        if (!root)
            return 0;
        int count = 1;
        countGoodNodes(root, root->val, count);
        return count;
    }
private:
    void countGoodNodes(TreeNode* root, int curMax, int& count) {
        if (root->left) {
            if (root->left->val >= curMax) {
                count = count + 1;
            }
            int newMax = max(curMax, root->left->val);
            countGoodNodes(root->left, newMax, count);
        }
        if (root->right) {
            if (root->right->val >= curMax) {
                count = count + 1;
            }
            int newMax = max(curMax, root->right->val);
            countGoodNodes(root->right, newMax, count);
        }
    }
};