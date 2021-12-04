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
    int curr;
    vector<int> in, post;
    
    TreeNode * rec(int l,int r)
    {
        if(l>r)
            return NULL;
        int i=0;
        while(in[i]!=post[curr])
        {
            i++;
        }
        
        curr--;
        TreeNode* node=new TreeNode(in[i]);
        node->right=rec(i+1,r);
        node->left=rec(l,i-1);
        return node;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    curr=inorder.size()-1;
        in=inorder;
        post=postorder;
        return rec(0,postorder.size()-1);
    }
};
