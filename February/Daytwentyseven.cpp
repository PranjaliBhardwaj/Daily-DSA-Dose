/*Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them*/



class Solution {
public:
    int d(TreeNode* root, int &res)
    {
        if(root==nullptr)
        {
            return 0;
        }

        int left=d(root->left,res);
        int right=d(root->right,res);

        int temp=max(left,right)+1;
        int ans=max(temp,left+right+1);
        res=max(ans,res);
        return temp;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        d(root,res);
        return res-1;
    }
};
