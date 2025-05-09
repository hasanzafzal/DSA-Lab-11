#ifndef TREETYPE_CPP
#define TREETYPE_CPP
#include "TreeType.h"

template <class ItemType>
TreeType<ItemType>::TreeType() 
{
    root = nullptr;
}

template <class ItemType>
bool TreeType<ItemType>::IsEmpty() const 
{
    return root == nullptr;
}

template <class ItemType>
void TreeType<ItemType>::InsertItem(ItemType item)
{
    InsertHelper(root, item);
}

template <class ItemType>
void TreeType<ItemType>::InsertHelper(TreeNode<ItemType>*& ptr, ItemType item) 
{
    if (ptr == nullptr) 
    {
        ptr = new TreeNode<ItemType>;
        ptr->info = item;
        ptr->left = nullptr;
        ptr->right = nullptr;
    }
    else if (item < ptr->info)
    {
        InsertHelper(ptr->left, item);
    }
    else
    {
        InsertHelper(ptr->right, item);
    }
}

template <class ItemType>
void TreeType<ItemType>::RetrieveItem(ItemType& item, bool& found) 
{
    found = false;
    RetrieveHelper(root, item, found);
}

template <class ItemType>
void TreeType<ItemType>::RetrieveHelper(TreeNode<ItemType>* ptr, ItemType& item, bool& found) 
{
    if (ptr == nullptr)
    {
        found = false;
    }
    else if (item < ptr->info)
    {
        RetrieveHelper(ptr->left, item, found);
    }
    else if (item > ptr->info) 
    {
        RetrieveHelper(ptr->right, item, found);
    }
    else {
        found = true;
        item = ptr->info;
    }
}

#endif