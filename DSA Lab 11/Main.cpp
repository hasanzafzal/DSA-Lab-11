#include <iostream>
#include "TreeType.h"
using namespace std;

int main()
{
    TreeType<int> bst;
    int numItems, value;
    cout << "Enter number of items to insert: ";
    cin >> numItems;
    cout << "Enter " << numItems << " values:\n";
    for (int i = 0; i < numItems; i++) 
    {
        cin >> value;
        bst.InsertItem(value);
    }
    int searchItem;
    cout << "\nEnter item to search: ";
    cin >> searchItem;
    bool found;
    bst.RetrieveItem(searchItem, found);
    if (found) 
    {
        cout << "Item " << searchItem << " found in the BST.\n";
    }
    else 
    {
        cout << "Item " << searchItem << " not found in the BST.\n";
    }

    return 0;
}