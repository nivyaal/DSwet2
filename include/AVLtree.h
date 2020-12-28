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
        Node* parent;
        Node* right;
        Node* left;
        Node* sucessor;
        Node* predecessor;
        Node():key(U()),value(T()),bf(0),height(0),parent(nullptr),right(nullptr),left(nullptr),sucessor(nullptr),predecessor(nullptr){};
        Node(const U& key,const T& val):key(key),value(val),bf(0),height(0),parent(nullptr),right(nullptr),left(nullptr),sucessor(nullptr),predecessor(nullptr){};
    };

template <class U, class T>
class AVLtree 
{
    private:
    Node<U,T>* erase(const U& key, Node<U,T>* r);
    Node<U,T>* find(const U &key, Node<U,T>* r);
    void updateHeight(Node<U,T>* r);
    Node<U,T>* insert(const U& key,const T& val,Node<U,T>* r);
    static Node<U,T>* findSucessor( Node<U,T>* r);
    static Node<U,T>* findPreDeSucessor( Node<U,T>* r);
    void updateMin( Node<U,T>* r);
    void updateNodeInfo(Node<U,T>* r);
    static bool isLeaf(const Node<U,T>* vertex){return (vertex->right==nullptr&&vertex->left==nullptr);};
    static void blankTree(Node<U,T>* r);
    Node<U,T>* rotateRL(Node<U,T>* r);
    Node<U,T>* rotateLR(Node<U,T>* r);
    Node<U,T>* rotateRR(Node<U,T>* r);
    Node<U,T>* rotateLL(Node<U,T>* r);
    Node<U,T>* balance(Node<U,T>* r);
    void updateBf( Node<U,T>* r );
    static int getBf(Node<U,T>* v);
    static void setParent(Node<U,T>*  son,Node<U,T>*  parent);

    public:
    int size=0;
    Node<U,T>* root;
    Node<U,T>* min_node;
    AVLtree():root(nullptr){};
    ~AVLtree();
    void insert(const U& key,const T& val);
    void erase(const U& key);
    T* find(const U &key);
    int getTreeSize() const;
    T* getIthElement(const int index) const;
};

template <class U, class T>
T* AVLtree<U,T>::getIthElement(const int index) const
{
    int curr_index =1;
    Node<U,T>* curr_element = min_node;
    while (curr_element != nullptr && curr_index !=index)
    {
        curr_element = curr_element-> predecessor;
        curr_index++;
    }
    return &curr_element->value;
}

template <class U,class T>
T* AVLtree<U,T>::find(const U &key)
{
    Node<U,T>* temp = find(key, root);
    if (temp==nullptr)
    {
        return nullptr;
    }
    else
    {
        return &(temp->value);
    }
    
}


template <class U,class T>
int AVLtree<U,T>::getTreeSize() const
{
    return size;
}

template <class U,class T>
void AVLtree<U,T>::updateNodeInfo(Node<U,T>* r)
{
    updateHeight(r);
    updateBf(r);
}

template<class U,class T>
void AVLtree<U,T>::updateMin( Node<U,T>* r)
{
    if (r==nullptr||r->left==nullptr)
    {
        min_node=r;
        return;
    }
    Node<U,T>* temp = r;
    while (temp->left!=nullptr)
    {
        temp=temp->left;
    }
    min_node=temp;
}

template<class U,class T>
int AVLtree<U,T>::getBf(Node<U,T>* v)
{
    if (v==nullptr)
    {
        return 0;    }
    else
    {
        return v->bf;
    }
}

template<class U,class T>
Node<U,T>* AVLtree<U,T>::balance(Node<U,T>* r)
{
   updateNodeInfo(r);
    Node<U,T>* tmp_parent = r->parent;
    if (getBf(r)==2)
    {
        if (getBf(r->left)>=0)
        {
            r=rotateLL(r);            
        }
        else
        {
            r=rotateLR(r);
        }
    }
    else if(getBf(r)==-2)
    {
        if (getBf(r->right)<=0)
        {
            r = rotateRR(r);            
        }
        else
        {
            r = rotateRL(r);
        }
    }
    r->parent= tmp_parent;
    return r;
}

template<class U,class T >
void AVLtree<U,T>::setParent(Node<U,T>*  son,Node<U,T>* parent)
{
    if (son==nullptr)
    {
        return;
    }
    else
    {
        son->parent=parent;
    }
}

template<class U,class T>
Node<U,T>* AVLtree<U,T>::rotateLR(Node<U,T>* r)
{     
    Node<U,T>* C=r;
    Node<U,T>* A=C->left;
    Node<U,T>* B=A->right;
    Node<U,T>* Bl=B->left;
    Node<U,T>* Br=B->right;
    A->right=Bl;
    C->left=Br;
    B->right =C;
    B->left = A;
    setParent(Bl,A);
    setParent(Br,C);
    setParent(C,B);
    setParent(A,B);
    updateNodeInfo(C);
    updateNodeInfo(A);
    updateNodeInfo(B);
    return B;
}

template<class U,class T>
Node<U,T>* AVLtree<U,T>::rotateRL(Node<U,T>* r)
{     
    Node<U,T>* C=r;
    Node<U,T>* A=C->right;
    Node<U,T>* B=A->left;
    Node<U,T>* Bl=B->left;
    Node<U,T>* Br=B->right;
    A->left=Br;
    C->right=Bl;
    B->right =A;
    B->left = C;
    setParent(Bl,C);
    setParent(Br,A);
    setParent(C,B);
    setParent(A,B);
    updateNodeInfo(C);
    updateNodeInfo(A);
    updateNodeInfo(B);
    return B;
}

template<class U,class T>
Node<U,T>* AVLtree<U,T>::rotateRR(Node<U,T> *r)
{     
    Node<U,T>* B=r;
    Node<U,T>* A=B->right;
    Node<U,T>* Al= A->left;
    B->right=Al;
    A->left=B;
    setParent(Al,B);
    setParent(B,A);
    updateNodeInfo(B);
    updateNodeInfo(A);
    return A;

}

template <class U,class T>
Node<U,T>* AVLtree<U,T>::rotateLL(Node<U,T> *r)
{   
    Node<U,T>* B=r;
    Node<U,T>* A=B->left;
    Node<U,T>* Ar= A->right;
    B->left=Ar;
    A->right=B;
    setParent(Ar,B);
    setParent(B,A);
    updateNodeInfo(B);
    updateNodeInfo(A);
    return A;
}

template<class U,class T>
void AVLtree<U,T>::updateBf( Node<U,T>* r )
{
    int right_height=0,left_height=0;
    if (r->right!=nullptr)
    {
        right_height=r->right->height+1;
    }
    if (r->left!=nullptr)
    {
        left_height=r->left->height+1;
    }
    r->bf=left_height-right_height;
}

template<class U,class T>
Node<U,T>* AVLtree<U,T>::findSucessor( Node<U,T>* r)
{
    if (r->right!=nullptr)
    {
        Node<U,T>* temp_node=r->right;
        while(temp_node->left!=nullptr)
        {
            temp_node=temp_node->left;
        }
        return temp_node;
    }
    else if (r->parent!=nullptr)
    {
        Node<U,T>* temp_node2=r;
        
        while(temp_node2->parent->left!=temp_node2)
        {
            if (temp_node2->parent->parent==nullptr)
            {
                return nullptr;
            }
            else
            {
                temp_node2=temp_node2->parent;
            }
        }
        return temp_node2->parent;
    }
    else
    {
        return nullptr;
    }
}

template<class U,class T>
Node<U,T>* AVLtree<U,T>::findPreDeSucessor( Node<U,T>* r)
{
    if (r->left!=nullptr)
    {
        Node<U,T>* temp_node=r->left;
        while(temp_node->right!=nullptr)
        {
            temp_node=temp_node->right;
        }
        return temp_node;
    }
    else if (r->parent!=nullptr)
    {
        Node<U,T>* temp_node2=r;
        while(temp_node2->parent->right!=temp_node2)
        {
            if (temp_node2->parent->parent==nullptr)
            {
                return nullptr;
            }
            else
            {
                temp_node2=temp_node2->parent;
            }
        }
        return temp_node2->parent;
    }
    else
    {
        return nullptr;
    }
}

template<class U,class T>
void AVLtree<U,T>::blankTree(Node<U,T>* r)
{
    if ( r == nullptr)
    {
        return;
    }
    blankTree(r->left);
    blankTree(r->right);
    delete r;
}

template<class U,class T>
AVLtree<U,T>::~AVLtree()
{
    blankTree(root);
}

template<class U, class T>
void AVLtree<U,T>::erase(const U& key)
{
    Node<U,T>* deleted_node =find(key,root);
        if (deleted_node->right!=nullptr && deleted_node->left!=nullptr)
    {
        if (deleted_node->sucessor->sucessor!=nullptr)
        {
            deleted_node->sucessor->sucessor->predecessor=deleted_node;
        }
        deleted_node->sucessor=deleted_node->sucessor->sucessor;
    }
    else
    {
        if (deleted_node->predecessor!=nullptr)
        {
            deleted_node->predecessor->sucessor=deleted_node->sucessor;
        }
        if (deleted_node->sucessor!=nullptr)
        {
            deleted_node->sucessor->predecessor=deleted_node->predecessor;
        }
    }
    size--;
    root=erase(key,root);
    updateMin(root);
}

template<class U,class T>
void AVLtree<U,T>::insert(const U& key,const T& val)
{
    root=insert(key,val,root);
    Node<U,T>* new_node=find(key,root);
    new_node->sucessor=findSucessor(new_node);
    new_node->predecessor=findPreDeSucessor(new_node);
    if (new_node->sucessor!=nullptr)
    {
        new_node->sucessor->predecessor=new_node;
    }
    if (new_node->predecessor!=nullptr)
    {
        new_node->predecessor->sucessor=new_node;
    }
    size++;
    updateMin(root);

}

template<class U,class T>
Node<U,T>* AVLtree<U,T>::erase(const U& key,Node<U,T>* r)
{
    if (r==nullptr)
    {
        throw valueDoesntExist();
    }
    if(r->key == key)
    {
        Node<U,T>* temp;
        if(isLeaf(r))//in case its a leaf
        {
            delete(r);
            return nullptr;
        }
        else if(r->right == nullptr || r->left == nullptr)//if it has single son
        {
            if (r->right==nullptr)
            {   
                temp=r->left;
                temp->parent=r->parent;
            }
            else
            {
                temp=r->right;
                temp->parent=r->parent;
            }
            delete(r);
            return temp;  
        }
        else//if it has two sons
        {
            Node<U,T>* temp=findSucessor(r);
            r->value=temp->value;
            r->key=temp->key;
            r->right=erase(r->key,r->right);
            r=balance(r);
        }
    }
    else if(r->key<key)
    {
        r->right=erase(key,r->right);
        r=balance(r);
        
    }
    else if (r->key>key)
    {
        r->left=erase(key,r->left);
        r= balance(r);
    }
    return r; 
}

template<class U, class T>
Node<U,T>* AVLtree<U,T>::find(const U& key, Node<U,T>* r)
{
    if (r==nullptr)
    {
        return nullptr;
    }
    else if (key == r->key)
    {
        return r;
    }
    else if (key> r->key)
    {
        return find(key, r->right);
    }
    else //(val< r->value)
    {
        return find(key, r->left);
    }  
}

template<class U, class T>
Node<U,T>* AVLtree<U,T>::insert(const U& key,const T &val,Node<U,T>* r)
{
    if(r == nullptr)
    {
        r = new Node<U,T>(key,val);
        return r;
    } 
     if(r->key<key)
    {
        r->right=insert(key,val,r->right);
        r->right->parent=r;
        r=balance(r);
    }
    else if (r->key>key)
    {
        r->left=insert(key,val,r->left);
        r->left->parent=r;
        r=balance(r);
    }
    else
    {
        throw valueExist();
    }
    return r;
}
template <class U,class T>
void AVLtree<U,T>::updateHeight(Node<U,T>* r)
{
    if (isLeaf(r))
    {
        r->height=0;
        return;
    }
    else if ((r->left!=nullptr)&&(r->right==nullptr))
    {
        r->height=r->left->height+1;
    }
    else if ((r->right!=nullptr)&&(r->left==nullptr))
    {
        r->height=r->right->height+1;
    }
    else
    {
        if (r->left->height>r->right->height)
        {
        r->height=r->left->height+1;
        }
        else
        {
            r->height=r->right->height+1;
        }
    }
    return;
}

#endif
