#ifndef UNTITLED27_TREE_H
#define UNTITLED27_TREE_H
#include <queue>
template<typename T>
class Tree{
    struct node
    {
        T item;
        node * right;
        node * left;
    };
public:
    Tree();
    void preOrder(node *el);
    void inOrder(node *el);
    void postOrder(node *el);
    void levelOrder(node *root);
};

template<typename T>
Tree<T>::Tree()
{}

template<typename T>
void Tree<T>::preOrder(Tree::node *el) // root left right
{
    if (el != nullptr) //check if the node is valid for process
    {
        cout << el->item <<" "; //print the value of item stored  in the current node
        preOrder(el->left);
        preOrder(el->right); // visit the right subtree of the node
    }
}

template<typename T>
void Tree<T>::inOrder(Tree::node *el) //left root right
{
    if (el != nullptr) //base case
    {
        inOrder(el->left); // visit left subtree
        cout << el->item << " "; // root
        inOrder(el->right); // visit right subtree
        cout << el->item << " "; // root
    }
}

template<typename T>
void Tree<T>::postOrder(Tree::node *el) // left right root
{
    if (el != nullptr) //base case
    {
        postOrder(el->left); //visit left subtree
        postOrder(el->right); // visit right subtree
        cout << el->item << " "; // root
    }
}

template<typename T>
void Tree<T>::levelOrder(Tree::node *root)
{
    if (root == nullptr) // in this case we don't have a tree and  without performing any traversal
    {
        return;
    }
    queue<node *> queue1; //This queue will store pointers to tree nodes.
    queue1.push(root); // initial push root node in the queue
    while (!queue1.empty()) // check if the queue is empty
    {
        //if the queue isn't empty
        node *curr = queue1.front(); // create a new node and store the first element in the queue
        cout << curr->item << " "; // root
        if (curr->left != nullptr) // if the tree have a left subtree
        {
            queue1.push(curr->left); // push  the node of the left subtree in the queue
        }
        if (curr->right != nullptr) // if the tree have a right subtree
        {
            queue1.push(curr->right); // push the node of the right subtree in the queue
        }
        queue1.pop(); // pop the element
    }
}

///Binary Search Tree
template<typename T>
class BST
{
public:
    bool isEmpty();
    bool search(const T&);
    bool searchRec(const T&);
    void insert(const T&);
    void remove(const T&);
    void inOrder_traversal();
    void preOrder_traversal();
    void postOrder_traversal();
    int treeHeight();
    int treeNodeCount();
    int treeLeavesCount();
    void cleatTree();
    BST();
    ~BST();

private:
    struct node
    {
        T item;
        node * right;
        node * left;
    };
    node *root;
    void clear(node *&ptr);
    void inOrder(node *ptr);
    void preOrder(node *ptr);
    void postOrder(node *ptr);
    int height(node *ptr);
    T max(T& x , T& y);
    int nodeCount(node *ptr);
    int leavesCount(node *ptr);
    void deleteFromTree(node *&ptr);
    bool searchRecPriv(node * , int );
};

template<typename T>
bool BST<T>::isEmpty() {
    return (root == nullptr);
}

template<typename T>
BST<T>::BST()
{
    root = nullptr;
}

template<typename T>
void BST<T>::inOrder_traversal()
{
    inOrder(root);
}

template<typename T>
void BST<T>::preOrder_traversal()
{
    preOrder(root);
}

template<typename T>
void BST<T>::postOrder_traversal()
{
    postOrder(root);
}

template<typename T>
int BST<T>::treeHeight()
{
    return height(root);
}

template<typename T>
int BST<T>::treeNodeCount() {
    return nodeCount(root);
}

template<typename T>
int BST<T>::treeLeavesCount() {
    return leavesCount(root
    );
}

template<typename T>
void BST<T>::inOrder(BST::node *ptr) //left root right
{
    if (ptr != nullptr)
    {
        inOrder(ptr->left);
        cout << ptr->item << " ";
        inOrder(ptr->right);
    }
}

template<typename T>
void BST<T>::preOrder(BST::node *ptr) //root left right
{
    if (ptr != nullptr)
    {
        cout << ptr->item << " ";
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}

template<typename T>
void BST<T>::postOrder(BST::node *ptr)//left right root
{
    if (ptr != nullptr)
    {
        postOrder(ptr->left);
        postOrder(ptr->right);
        cout << ptr->item << " ";
    }

}

template<typename T>
void BST<T>::clear(BST::node *&ptr)
{
    if (ptr != nullptr)
    {
        clear(ptr->left); //delete node in left subtree
        clear(ptr->right); //delete node in right subtree
        delete ptr;
        ptr = nullptr;
    }
}

template<typename T>
void BST<T>::cleatTree()
{
    clear(root);
}

template<typename T>
BST<T>::~BST()
{
    clear(root);
}

template<typename T>
int BST<T>::height(BST::node *ptr) {
    if (ptr == nullptr)
    {
        return 0;
    }else
    {
        //This line calculates the height of the current node's subtree by recursively computing the height of its left subtree (height(p->left)) and its right subtree (height(p->right)).
        // The height of the subtree is the maximum of the heights of the left and right subtrees plus 1 (the "+1" accounts for the current node).
        //This is a classic pattern for calculating the height of a binary tree.
        return  1 + max(height(ptr->left), height(ptr->right));
    }
}

template<typename T>
T BST<T>::max(T &x, T &y) {
    if (x >= y)
    {
        return x;
    }else
    {
        return y;
    }
}

template<typename T>
int BST<T>::nodeCount(BST::node *ptr) {
    if (ptr == nullptr)
    {
        return 0;
    } else
    {
        // 1 is a current node
        // nodeCount(ptr->left) count the node in the left subtree
        //nodeCount(ptr->right) count the node in the right subtree
        return 1 + nodeCount(ptr->left) + nodeCount(ptr->right);
    }
}

template<typename T>
int BST<T>::leavesCount(BST::node *ptr) {
    return 0;
}

template<typename T>
bool BST<T>::searchRecPriv(BST::node *, int) {
    return false;
}


#endif //UNTITLED27_TREE_H
