/*Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].*/


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
    int sum=0;
    void preOrder(TreeNode* root, int low, int high){
        if (!root) return ;
        if (root->val<=high && root->val>=low) 
            sum+=root->val;
        preOrder(root->left, low, high);
        preOrder(root->right, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        preOrder(root, low, high);
        return sum;  
    }
};
