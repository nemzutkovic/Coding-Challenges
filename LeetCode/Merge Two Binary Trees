TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
  if (t1 == NULL && t2 == NULL) return NULL;
  if (t1 == NULL && t2 != NULL) return t2;
  if (t1 != NULL && t2 == NULL) return t1;
  
  if (t1 != NULL && t2 != NULL) t1->val = t1->val + t2->val;
  
  if (t1->left != NULL && t2->left != NULL) mergeTrees(t1->left, t2->left);
  if (t1->right != NULL && t2->right != NULL) mergeTrees(t1->right, t2->right);
  
  if (t1->right == NULL && t2->right != NULL) t1->right = t2->right;
  if (t1->left == NULL && t2->left != NULL) t1->left = t2->left;
  
  return t1;
}