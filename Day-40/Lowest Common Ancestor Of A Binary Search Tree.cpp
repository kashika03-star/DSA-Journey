class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreNode* p, TreeNode* q) {

        if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);

        if(p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);

        return root;
    }
};
