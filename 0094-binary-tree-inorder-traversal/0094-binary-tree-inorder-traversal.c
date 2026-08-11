/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void backtrack(struct TreeNode* node, int* carry, int* i)
{
    if (node == NULL)
    {
        return;
    }
    
    backtrack(node->left, carry, i);
    carry[*i] = node->val;
    (*i)++;
    backtrack(node->right, carry, i);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int index = 0;
    int* out = (int*)calloc(128,sizeof(int));
    backtrack(root,out,&index);
    *returnSize = index;
    return out;
}