/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void DFS(Node* curr, Node* next) {
        if (curr == NULL) return;

        curr->next = next;

        DFS(curr->left, curr->right);
        DFS(curr->right, (curr->next == NULL) ? NULL : curr->next->left);
    }
    Node* connect(Node* root) {
        DFS(root, NULL);
        return root;
    }
};