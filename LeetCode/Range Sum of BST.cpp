int rangeSumBST(TreeNode* root, int L, int R) {
  if (root == NULL) return 0;
  return (root->val <= R && root->val >= L ? root->val : 0) + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
}