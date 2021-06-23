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
    int sum;
    Solution(){sum=0;}
    void summ(TreeNode *root)
    {
        if(root!=NULL)
        {
            if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
            {
                sum=sum+root->left->val;
            }
            summ(root->left);
            summ(root->right);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        summ(root);
        return sum;
    }
};
