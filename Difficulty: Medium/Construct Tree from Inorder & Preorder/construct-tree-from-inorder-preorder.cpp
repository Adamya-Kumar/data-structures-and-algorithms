//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
        void createMapping(int Inorder[],int n,map<int,int> &nodeToIndex){
        for(int i=0;i<n;i++){
            nodeToIndex[Inorder[i]]=i;
        }
    }
    Node* helper(int InOrder[],int PerOrder[],int n,int &index,int sIndex,int eIndex,map<int,int> &nodeToIndex){
            if(index >= n || sIndex >  eIndex){
                return NULL;
            }
            int element = PerOrder[index++];
            Node* root = new Node(element);
            int position = nodeToIndex[element];

            root->left = helper(InOrder,PerOrder,n,index,sIndex,position-1,nodeToIndex);
            root->right = helper(InOrder,PerOrder,n,index,position+1,eIndex,nodeToIndex);
            return root;
    }
  Node* genrateTreeUsingInorderPerorder(int InOrder[],int PerOrder[],int n){
     int sIndex=0;
    int eIndex=n-1;
    int index =0;
    map<int,int> nodeToIndex;
    createMapping(InOrder,n,nodeToIndex);
    Node* root=helper(InOrder,PerOrder,n,index,sIndex,eIndex,nodeToIndex);
    return root;
  }
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        return genrateTreeUsingInorderPerorder(in,pre,n);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends