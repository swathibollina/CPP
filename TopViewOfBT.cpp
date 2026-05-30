/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        queue<pair<int,Node* >> q;
        vector<int> ans;
        map<int,Node* > m;
        if(root==NULL)
        return ans;
        q.push({0,root});
        while(!q.empty())
        {
            pair<int,Node* > temp=q.front();
            if(m.find(temp.first)==m.end())
            {
                m[temp.first]=temp.second;
            }
            q.pop();
            if(temp.second->left!=NULL)
                q.push({temp.first-1,temp.second->left});
            if(temp.second->right!=NULL)
                q.push({temp.first+1,temp.second->right});
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            ans.push_back(it->second->data);
        }
        return ans;
    }
};
