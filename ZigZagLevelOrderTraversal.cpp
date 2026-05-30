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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode* > q;
        vector<vector<int>> ans;
        if(root==NULL)
        return ans;
        q.push(root);
        q.push(NULL);
        vector<int> v;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp==NULL)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                }
                ans.push_back(v);
                v.resize(0);
            }
            else
            {
                v.push_back(temp->val);
                if(temp->left!=NULL)
                q.push(temp->left);
                if(temp->right!=NULL)
                q.push(temp->right);
            }
        }
        for(int i=1;i<ans.size();i+=2)
        {
            reverse(ans[i].begin(),ans[i].end());
        }
        return ans;
    }
};
