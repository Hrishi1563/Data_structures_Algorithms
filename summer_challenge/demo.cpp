/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        map<TreeNode *, TreeNode *> parent_array;
        queue<pair<TreeNode *, TreeNode *>> q;
        q.push({root, NULL});
        // TreeNode* parent=NULL;
        while (q.size())
        {
            TreeNode *node = q.front().first;
            TreeNode *parent = q.front().second;
            parent_array[node] = parent;
            q.pop();
            if (node->left)
                q.push({node->left, node});
            if (node->right)
                q.push({node->right, node});
        }
        queue<pair<TreeNode *, int>> q1;
        q1.push({target, 0});
        set<TreeNode *> s;
        int set_size = 1;
        s.insert(target);
        int dist = 0;
        vector<int> ans;
        while (q1.size())
        {
            TreeNode *node = q1.front().first;
            int dist = q1.front().second;
            q1.pop();
            if (dist == k)
                ans.push_back(node->val);
            if (parent_array[node])
            {
                s.insert(parent_array[node]);
                if (set_size != s.size())
                {
                    set_size++;
                    q1.push({parent_array[node], dist + 1});
                }
            }
            if (node->left)
            {
                s.insert(node->left);
                if (set_size != s.size())
                {
                    set_size++;
                    q1.push({node->left, dist + 1});
                }
            }
            if (node->right)
            {
                s.insert(node->right);
                if (set_size != s.size())
                {
                    set_size++;
                    q1.push({node->right, dist + 1});
                }
            }
        }

        return ans;
    }
};