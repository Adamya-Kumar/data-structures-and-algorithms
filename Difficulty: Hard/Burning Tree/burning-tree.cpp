//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
    // Function to create a mapping from each node to its parent
    Node* createNodeToParentMapping(Node* root, int target, map<Node*, Node*>& nodeToParent) {
        Node* targetNode = NULL; // This will store the target node
        queue<Node*> q; // Queue for BFS traversal
        q.push(root);
        nodeToParent[root] = NULL; // Root node has no parent

        while (!q.empty()) {
            Node* currentNode = q.front();
            q.pop();

            // If the current node is the target, store it
            if (currentNode->data == target) {
                targetNode = currentNode;
            }

            // If the left child exists, push it into the queue and map its parent
            if (currentNode->left) {
                q.push(currentNode->left);
                nodeToParent[currentNode->left] = currentNode;
            }

            // If the right child exists, push it into the queue and map its parent
            if (currentNode->right) {
                q.push(currentNode->right);
                nodeToParent[currentNode->right] = currentNode;
            }
        }
        return targetNode; // Return the node that matches the target value
    }

    // Function to burn the tree starting from the target node
    int burnTree(Node* root, map<Node*, Node*>& nodeToParent) {
        map<Node*, bool> visited; // To track visited nodes
        queue<Node*> q; // Queue for BFS traversal
        q.push(root);
        visited[root] = true;
        int time = 0;

        while (!q.empty()) {
            bool flag = false; // Track if we burned any new nodes
            int size = q.size();

            for (int i = 0; i < size; i++) {
                Node* currentNode = q.front();
                q.pop();

                // If the left child exists and hasn't been visited, burn it
                if (currentNode->left && !visited[currentNode->left]) {
                    flag = true;
                    q.push(currentNode->left);
                    visited[currentNode->left] = true;
                }

                // If the right child exists and hasn't been visited, burn it
                if (currentNode->right && !visited[currentNode->right]) {
                    flag = true;
                    q.push(currentNode->right);
                    visited[currentNode->right] = true;
                }

                // If the parent exists and hasn't been visited, burn it
                if (nodeToParent[currentNode] && !visited[nodeToParent[currentNode]]) {
                    flag = true;
                    q.push(nodeToParent[currentNode]);
                    visited[nodeToParent[currentNode]] = true;
                }
            }

            // If we burned any new nodes, increment the time
            if (flag) {
                time++;
            }
        }
        return time; // Return the total time to burn the entire tree
    }

  public:
    // Main function to calculate the minimum time to burn the tree from the target node
    int minTime(Node* root, int target) {
        // Map to store the node to parent mapping
        map<Node*, Node*> nodeToParent;

        // Find the target node and create the node to parent mapping
        Node* targetNode = createNodeToParentMapping(root, target, nodeToParent);

        // Burn the tree starting from the target node
        return burnTree(targetNode, nodeToParent);
    }
};


//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends