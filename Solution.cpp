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
    // Helper function to check if two trees are the same
    bool areTreesIdentical(TreeNode* root1, TreeNode* root2) {
        // If both nodes are null, trees are identical at this point
        if (!root1 && !root2) return true;

        // If only one is null or values mismatch, not identical
        if (!root1 || !root2 || root1->val != root2->val)
            return false;

        // Recursively check left and right subtrees
        return areTreesIdentical(root1->left, root2->left) &&
               areTreesIdentical(root1->right, root2->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return areTreesIdentical(p, q);
    }
};
