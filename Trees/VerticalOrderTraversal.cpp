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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<int,TreeNode* >> q;
        map<int,vector<TreeNode* >> m;
        q.push({0,root});
        while(!q.empty())
        {
            pair<int,TreeNode* > p=q.front();
            m[p.first].push_back(p.second);
            q.pop();
            if(p.second->left!=NULL)
            q.push({p.first-1,p.second->left});
            if(p.second->right!=NULL)
            q.push({p.first+1,p.second->right});
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            vector<int> temp;
            for(int i=0;i<it->second.size();i++)
            {
                temp.push_back(it->second[i]->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
