#include <iostream>
#include <queue>
#include <stack>
using namespace std;
template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};
void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    if(root == NULL){
        return;
    }
    stack<BinaryTreeNode<int> *> s1;
    stack<BinaryTreeNode<int> *> s2; 
    BinaryTreeNode<int> *root1 = root, *root2 = root;
    BinaryTreeNode<int> *curr1 = NULL, *curr2 = NULL;
    bool find1 = false, find2 = false;
    while (true)
    {
        if (find1 == false)
        {
            while (root1 != NULL)
            {
                s1.push(root1);
                root1 = root1 -> left;
            }
            curr1 = s1.top();
            s1.pop();
            root1 = curr1 -> right;
            find1 = true;
        }
        if (find2 == false)
        {
            while (root2 != NULL)
            {
                s2.push(root2);
                root2 = root2 -> right;
            }
            curr2 = s2.top();
            s2.pop();
            root2 = curr2->left;
            find2 = true;
        }
        if (curr1 -> data >= curr2 -> data)
        {
            break;
        }
        if (curr1 -> data + curr2 -> data == s)
        {
            cout << curr1->data << " " << curr2->data << endl;
            find1 = false;
            find2 = false;
        }
        else if (curr1 -> data + curr2 -> data < s)
        {
            find1 = false;
        }
        else 
        {
            find2 = false;
        }
    }
}

BinaryTreeNode<int> *takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int s;
    cin >> s;
    printNodesSumToS(root, s);
    delete root;
}