#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node() {}
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    vector<int> verticalTree(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        map<int, map<int, vector<int>>> nodes;
        queue<pair<Node*, pair<int, int>>> q;
        q.push(make_pair(root, make_pair(0, 0)));
        while (!q.empty())
        {
            pair<Node *, pair<int, int>> temp = q.front();
            q.pop();
            Node *frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            nodes[hd][lvl].push_back(frontNode->data);
            if (frontNode->left )
                q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
            if (frontNode->right )
                q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
        }
        for (auto i : nodes)
        {
            for (auto j : i.second)
            {
                for (auto k : j.second)
                {
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};
int main()
{
    Node obj;


    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(6);

    root->left->left->left = new Node(8);
    // root->left->left->left->right = new Node(44);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    // root->left->right->right->left = new Node(99);
    root->right->right->right = new Node(13);

    vector<int> ans = obj.verticalTree(root);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}