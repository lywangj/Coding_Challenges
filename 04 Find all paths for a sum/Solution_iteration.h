
// not perfect solution yet
// not well-tested
// might fail in some extreme cases

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool findPath = false;
        stack<TreeNode*> st;
        int sum=0;
        int tmp=0;
        if(root==NULL){
            return false;
        }
        while(root!=NULL || !st.empty()){
            while(root!=NULL){
                st.push(root);
                sum+=root->val;
                if(sum==targetSum && root->right==NULL && root->left==NULL){
                    findPath = true;
                }
                root=root->left;
            }
            root=st.top();
            st.pop();
            sum-=tmp;
            tmp = root->val;
            root=root->right;
        }
        return findPath;
    }
};
