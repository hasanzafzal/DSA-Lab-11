#pragma once
#ifndef TREETYPE_H
#define TREETYPE_H
#include <iostream>
using namespace std;

template <class ItemType>
struct TreeNode
{
    ItemType info;
    TreeNode<ItemType>* left;
    TreeNode<ItemType>* right;
};

template <class ItemType>
class TreeType 
{
private:
    TreeNode<ItemType>* root;
    void InsertHelper(TreeNode<ItemType>*& ptr, ItemType item);
    void RetrieveHelper(TreeNode<ItemType>* ptr, ItemType& item, bool& found);
public:
    TreeType();
    bool IsEmpty() const;
    void InsertItem(ItemType item);
    void RetrieveItem(ItemType& item, bool& found);
};

#include "TreeType.cpp"

#endif