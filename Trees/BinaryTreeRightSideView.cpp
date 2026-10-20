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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode* > q;
        vector<int> ans;
        if(root==NULL)
        return ans;
        q.push(root);
        q.push(NULL);
        ans.push_back(root->val);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp==NULL)
            {
                if(!q.empty())
                {
                    ans.push_back(q.front()->val);
                    q.push(NULL);
                }
            }
            else
            {
                if(temp->right!=NULL)
                q.push(temp->right);
                if(temp->left!=NULL)
                q.push(temp->left);
            }
        }
        
        return ans;
    }
};
