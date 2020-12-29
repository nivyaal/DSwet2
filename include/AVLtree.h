#ifndef AVLTREE_H_
#define AVLTREE_H_
#include <iostream>
#include "TreeExceptions.h"

template <class U, class T>
class Node
{
private:
public:
    U key;
    T value;
    int bf;
    int height;
    int rank;
    Node *parent;
    Node *right;
    Node *left;
    Node() : key(U()), value(T()), parent(nullptr), left(nullptr), right(nullptr), rank(1), height(0), bf(0){};
    explicit Node(const U &key, const T &val) : key(key), value(val), bf(0), height(0), rank(1), parent(nullptr), right(nullptr), left(nullptr){};
};

template <class U, class T>
class AVLtree
{
private:
    Node<U, T> *erase(const U &key, Node<U, T> *r);
    T *find(const U &key, Node<U, T> *r);
    void updateHeight(Node<U, T> *r);
    Node<U, T> *insert(const U &key, const T &val, Node<U, T> *r);
    static Node<U, T> *findSucessor(const Node<U, T> *r);
    void updateNodeInfo(Node<U, T> *r);
    static bool isLeaf(const Node<U, T> *vertex) { return (vertex->right == nullptr && vertex->left == nullptr); };
    static void blankTree(Node<U, T> *r);
    Node<U, T> *rotateRL(Node<U, T> *r);
    Node<U, T> *rotateLR(Node<U, T> *r);
    Node<U, T> *rotateRR(Node<U, T> *r);
    Node<U, T> *rotateLL(Node<U, T> *r);
    Node<U, T> *balance(Node<U, T> *r);
    void updateBf(Node<U, T> *r);
    static int getBf(Node<U, T> *v);
    void updateRank(Node<U, T> *r);
    int getRank(const U &key);
    static void setParent(Node<U, T> *son, Node<U, T> *parent);

public:
    Node<U, T> *root;
    AVLtree() : root(nullptr){};
    ~AVLtree();
    void insert(const U &key, const T &val);
    void erase(const U &key);
    T *find(const U &key);
    int getTreeSize() const;
    T *getIthElement(const int i) const;
};

template <class U, class T>
Node<U, T> *AVLtree<U, T>::insert(const U &key, const T &val, Node<U, T> *r)
{
    if (r == nullptr)
    {
        r = new Node<U, T>(key, val);
        return r;
    }
    if (r->key < key)
    {
        r->right = insert(key, val, r->right);
        r->right->parent = r;
        r = balance(r);
    }
    else if (r->key > key)
    {
        r->left = insert(key, val, r->left);
        r->left->parent = r;
        r = balance(r);
    }
    else
    {
        throw valueExist();
    }
    return r;
}

template <class U, class T>
void AVLtree<U, T>::updateHeight(Node<U, T> *r)
{
    if (isLeaf(r))
    {
        r->height = 0;
        return;
    }
    else if ((r->left != nullptr) && (r->right == nullptr))
    {
        r->height = r->left->height + 1;
    }
    else if ((r->right != nullptr) && (r->left == nullptr))
    {
        r->height = r->right->height + 1;
    }
    else
    {
        if (r->left->height > r->right->height)
        {
            r->height = r->left->height + 1;
        }
        else
        {
            r->height = r->right->height + 1;
        }
    }
    return;
}

template <class U, class T>
T *AVLtree<U, T>::getIthElement(const int i) const
{
    int k = i;
    Node<U, T> *r = root;
    while (r != nullptr)
    {
        int root_rank = 0;
        if (r->left != nullptr)
        {
            root_rank = r->left->rank;
        }
        if (root_rank > k - 1)
        {
            r = r->left;
        }
        else if (root_rank < k - 1)
        {
            r = r->right;
            k = k - root_rank - 1;
        }
        else if (root_rank == k - 1)
        {
            return &(r->value);
        }
    }
    return nullptr;
}

template <class U, class T>
T *AVLtree<U, T>::find(const U &key)
{
    return find(key, root);
}

template <class U, class T>
int AVLtree<U, T>::getTreeSize() const
{
    if (root == nullptr)
    {
        return 0;
    }
    return root->rank;
}

template <class U, class T>
void AVLtree<U, T>::updateNodeInfo(Node<U, T> *r)
{
    updateHeight(r);
    updateBf(r);
    updateRank(r);
}

template <class U, class T>
void AVLtree<U, T>::updateRank(Node<U, T> *r)
{
    int rank_left = 0, rank_right = 0;
    if (r->left != nullptr)
    {
        rank_left = r->left->rank;
    }
    if (r->right != nullptr)
    {
        rank_right = r->right->rank;
    }
    r->rank = rank_left + rank_right + 1;
}

template <class U, class T>
int AVLtree<U, T>::getBf(Node<U, T> *v)
{
    if (v == nullptr)
    {
        return 0;
    }
    else
    {
        return v->bf;
    }
}

template <class U, class T>
Node<U, T> *AVLtree<U, T>::balance(Node<U, T> *r)
{
    updateNodeInfo(r);
    Node<U, T> *tmp_parent = r->parent;
    if (getBf(r) == 2)
    {
        if (getBf(r->left) >= 0)
        {
            r = rotateLL(r);
        }
        else
        {
            r = rotateLR(r);
        }
    }
    else if (getBf(r) == -2)
    {
        if (getBf(r->right) <= 0)
        {
            r = rotateRR(r);
        }
        else
        {
            r = rotateRL(r);
        }
    }
    r->parent = tmp_parent;
    return r;
}

template <class U, class T>
void AVLtree<U, T>::setParent(Node<U, T> *son, Node<U, T> *parent)
{
    if (son == nullptr)
    {
        return;
    }
    else
    {
        son->parent = parent;
    }
}
template <class U, class T>
Node<U, T> *AVLtree<U, T>::rotateLR(Node<U, T> *r)
{
    Node<U, T> *C = r;
    Node<U, T> *A = C->left;
    Node<U, T> *B = A->right;
    Node<U, T> *Bl = B->left;
    Node<U, T> *Br = B->right;
    A->right = Bl;
    C->left = Br;
    B->right = C;
    B->left = A;
    setParent(Bl, A);
    setParent(Br, C);
    setParent(C, B);
    setParent(A, B);
    updateNodeInfo(C);
    updateNodeInfo(A);
    updateNodeInfo(B);
    return B;
}

template <class U, class T>
Node<U, T> *AVLtree<U, T>::rotateRL(Node<U, T> *r)
{
    Node<U, T> *C = r;
    Node<U, T> *A = C->right;
    Node<U, T> *B = A->left;
    Node<U, T> *Bl = B->left;
    Node<U, T> *Br = B->right;
    A->left = Br;
    C->right = Bl;
    B->right = A;
    B->left = C;
    setParent(Bl, C);
    setParent(Br, A);
    setParent(C, B);
    setParent(A, B);
    updateNodeInfo(C);
    updateNodeInfo(A);
    updateNodeInfo(B);
    return B;
}

template <class U, class T>
Node<U, T> *AVLtree<U, T>::rotateRR(Node<U, T> *r)
{
    Node<U, T> *B = r;
    Node<U, T> *A = B->right;
    Node<U, T> *Al = A->left;
    B->right = Al;
    A->left = B;
    setParent(Al, B);
    setParent(B, A);
    updateNodeInfo(B);
    updateNodeInfo(A);
    return A;
}

template <class U, class T>
Node<U, T> *AVLtree<U, T>::rotateLL(Node<U, T> *r)
{
    Node<U, T> *B = r;
    Node<U, T> *A = B->left;
    Node<U, T> *Ar = A->right;
    B->left = Ar;
    A->right = B;
    setParent(Ar, B);
    setParent(B, A);
    updateNodeInfo(B);
    updateNodeInfo(A);
    return A;
}

template <class U, class T>
void AVLtree<U, T>::updateBf(Node<U, T> *r)
{
    int right_height = 0, left_height = 0;
    if (r->right != nullptr)
    {
        right_height = r->right->height + 1;
    }
    if (r->left != nullptr)
    {
        left_height = r->left->height + 1;
    }
    r->bf = left_height - right_height;
}

template <class U, class T>
Node<U, T> *AVLtree<U, T>::findSucessor(const Node<U, T> *r)
{
    Node<U, T> *curr = r->right;
    if (curr == nullptr)
    {
        throw AVLtreeException();
    }
    while (curr->left != nullptr)
    {
        curr = curr->left;
    }
    return curr;
}

template <class U, class T>
void AVLtree<U, T>::blankTree(Node<U, T> *r)
{
    if (r == nullptr)
    {
        return;
    }
    blankTree(r->left);
    blankTree(r->right);
    delete r;
}

template <class U, class T>
AVLtree<U, T>::~AVLtree()
{
    blankTree(root);
}

template <class U, class T>
void AVLtree<U, T>::erase(const U &key)
{
    root = erase(key, root);
}

template <class U, class T>
void AVLtree<U, T>::insert(const U &key, const T &val)
{
    root = insert(key, val, root);
}

template <class U, class T>
Node<U, T> *AVLtree<U, T>::erase(const U &key, Node<U, T> *r)
{
    //throw key does not exist
    if (r == nullptr)
    {
        throw valueDoesntExist();
    }
    if (r->key == key)
    {
        Node<U, T> *temp;
        if (isLeaf(r)) //in case its a leaf
        {
            delete (r);
            return nullptr;
        }
        else if (r->right == nullptr || r->left == nullptr) //if it has single son
        {
            if (r->right == nullptr)
            {
                temp = r->left;
                temp->parent = r->parent;
            }
            else
            {
                temp = r->right;
                temp->parent = r->parent;
            }
            delete (r);
            return temp;
        }
        else //if it has two sons
        {
            Node<U, T> *temp = findSucessor(r);
            r->value = temp->value;
            r->key = temp->key;
            r->right = erase(r->key, r->right);
            r = balance(r);
        }
    }
    else if (r->key < key)
    {
        r->right = erase(key, r->right);
        r = balance(r);
    }
    else if (r->key > key)
    {
        r->left = erase(key, r->left);
        r = balance(r);
    }
    return r;
}

template <class U, class T>
T *AVLtree<U, T>::find(const U &key, Node<U, T> *r)
{
    if (r == nullptr)
    {
        return nullptr;
    }
    else if (key == r->key)
    {
        return &(r->value);
    }
}
#endif