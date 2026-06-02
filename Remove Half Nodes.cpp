Node* RemoveNodes(Node* root)
{
    if(root==NULL)
    return root;
    if(root->left==NULL and root->right==NULL)
    return root;
    if(root->left==NULL and root->right!=NULL)
    {
        root=RemoveNodes(root->right);
        return root;
    }
    else if(root->left!=NULL and root->right==NULL)
    {
        root=RemoveNodes(root->left);
        return root;
    }
    else
    {
        root->left=RemoveNodes(root->left);
        root->right=RemoveNodes(root->right);
    }
    return root;
}

class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        // code here
        return RemoveNodes(root);
        
    }
};
