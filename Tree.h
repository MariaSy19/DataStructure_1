#ifndef UNTITLED27_TREE_H
#define UNTITLED27_TREE_H

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
    void levelOrder(node *el);
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
    if (el != el)
    {
        inOrder(el->left);
        cout << el->item << " ";
        inOrder(el->right);
        cout << el->item << " ";
    }
}

template<typename T>
void Tree<T>::postOrder(Tree::node *el) // left right root 
{

}


#endif //UNTITLED27_TREE_H
