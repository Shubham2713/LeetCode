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
    vector<int> pre,in;
    
    TreeNode * rec(int l,int r)
    {
        if(l>r)
            return NULL;
        int i=0;
        while(in[i]!=pre[curr])
            i++;
        curr++;
        TreeNode * node=new TreeNode(in[i]);
        node->left=rec(l,i-1);
        node->right=rec(i+1,r);
        
        return node;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        curr=0;
        pre=preorder;
        in=inorder;
        return rec(0,preorder.size()-1);
    }
};
