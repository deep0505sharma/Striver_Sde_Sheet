/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool getpath(TreeNode* A,vector<int>&arr,int x){
    if(!A)return false;
    arr.push_back(A->val);
    if(A->val == x)return true;
    if(getpath(A->left,arr,x)||getpath(A->right,arr,x))return true;
    arr.pop_back();
    return false;
}

vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    if(A==NULL) return ans;
    getpath(A,ans,B);
    return ans;
}

