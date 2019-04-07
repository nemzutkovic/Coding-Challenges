bool isUnivalTree(TreeNode* root) {
  // Needed Help Solving This One
  bool left = root->left == NULL || (root->val == root->left->val && isUnivalTree(root->left));
  bool right = root->right == NULL || (root->val == root->right->val && isUnivalTree(root->right));
  return left && right;
}