#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i < (r); i++)

using namespace std;
using P = pair<int, int>;


struct Node { 
	Node* parent; // 親 
	Node* left; // 左の子頂点 
	Node* right; // 右の子頂点 
	int value; // ノードに付随している値 
	Node(const int& value = 0) : value(value) {
		 parent = nullptr;
		 left = nullptr;
		 right = nullptr; 
	}
};

Node* root = new Node();

// 連結リストへ要素の挿入
void insert(Node* node_v)
{
	int v = node_v -> value;
	int par_v;
	Node *par;
	Node *nex = root;

	while (nex)
	{
		par = nex;
		par_v = par -> value;
		if (v <= par_v)
			nex = par -> left;
		else
			nex = par -> right;
	}
	if (v <= par_v)
	{
		par -> left = node_v;
		node_v -> parent = par;
	}
	else
	{
		par -> right = node_v;
		node_v -> parent = par;
	}
}

void	rec(Node* node_v)
{
	cout << node_v -> value << " ";

	if (node_v -> left)
		rec(node_v -> left);
	if (node_v -> right)
		rec(node_v -> right);
}

int main(void)
{
    int Q;
    cin >> Q;
	rep(i, 0, Q)
	{
		int v;
		cin >> v;
		if (i == 0)
			root -> value = v;
		else
		{
			Node *node_v = new Node(v);
			insert(node_v);
		}
		
	}

	rec(root);
 
}
