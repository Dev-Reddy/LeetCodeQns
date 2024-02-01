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
class Solution
{
public:
    void leafSeq(TreeNode *root, vector<int> &v)
    {
        if (root == nullptr)
        {
            return;
        }
        leafSeq(root->left, v);
        if (root->left == nullptr && root->right == nullptr)
        {
            v.push_back(root->val);
        }
        leafSeq(root->right, v);
        return;
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> l1;
        vector<int> l2;

        leafSeq(root1, l1);
        leafSeq(root2, l2);

        // if (l1.size() != l2.size())
        // {
        //     return false;
        // }

        // for (int i = 0; i < l1.size(); i++)
        // {
        //     if (l1[i] != l2[i])
        //     {
        //         return false;
        //     }
        // }

        // return true;

        return l1 == l2;
    }
};