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
    if (root == nullptr) // in this case we don't have a tree
    {
        return;
    }
    queue<node *> queue1;
    queue1.push(root);
    while (!queue1.empty())
    {
        node *curr = queue1.front();
        cout << curr->item << " ";
        if (curr->left != nullptr)
        {
            queue1.push(curr->left);
        }
        if (curr->right != nullptr)
        {
            queue1.push(curr->right);
        }
        queue1.pop();
    }
}


#endif //UNTITLED27_TREE_H
