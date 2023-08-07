#include <iostream>
#include "linkedList.h"
#include "DLL.h"
using namespace std;

int main()
{
    linkedList<int> link;
    DLL<int> DLink;
    int sz, items, item, index;
    int repeatChoice = 1;
    int typeLL;

    cout << "what the size of list you want: \n";
    cin >> sz;
    cout << "What Kind of Linked list you want: \n";
    cout << "1.SLL. \n";
    cout << "2.DLL. \n";
    cin >> typeLL;
    while (typeLL != 1 && typeLL != 2)
    {
        cout << "What Kind of Linked list you want: \n";
        cout << "1.SLL. \n";
        cout << "2.DLL. \n";
        cin >> typeLL;
    }

    for (int i = 0; i < sz; ++i)
    {
        cout << "Input the value: \n";
        cin >> items;
        if (typeLL == 1)
        {
            link.insertLast(items);
        }
        else if (typeLL == 2)
        {
            DLink.insertAtTail(items);
        }
    }

    while (repeatChoice == 1)
    {
        int choice = 0;
        if (typeLL == 1)
        {
            do {
                cout << "----SLL----" << endl;
                cout << "1.Insert At First. \n";
                cout << "2.Insert At Last. \n";
                cout << "3.Insert At position. \n";
                cout << "4.Remove From First. \n";
                cout << "5.Remove From last. \n";
                cout << "6.Remove From Key. \n";
                cout << "7.Revers linked List.\n";
                cout << "8.Search an item.\n";
                cout << "9.Exit.\n";
                cout << "Input what you want: \n";
                cin >> choice;
                switch (choice) {
                    case 1:
                        cout << "Input the item want to add in the linked list: \n";
                        cin >> item;
                        link.insertFirst(item);
                        cout << "--Insert At First--\n";
                        link.print();
                        sz++;
                        break;
                    case 2:
                        cout << "Input the item want to add in the linked list: \n";
                        cin >> item;
                        link.insertLast(item);
                        cout << "--Insert At Last--\n";
                        link.print();
                        sz++;
                        break;
                    case 3:
                        cout << "Input the item want to add in the linked list: \n";
                        cin >> item;
                        cout << "What the Index you want to add th item in: \n";
                        cin >> index;
                        link.insertAtPos(index, item);
                        cout << "--Insert At Position--\n";
                        link.print();
                        sz++;
                        break;
                    case 4:
                        link.RemoveAtFirst();
                        cout << "--Delete At First--\n";
                        link.print();
                        sz--;
                        break;
                    case 5:
                        link.RemoveAtLast();
                        cout << "--Delete At Last--\n";
                        link.print();
                        sz--;
                        break;
                    case 6:

                        cout << "Input the item want to delete form the linked list: \n";
                        cin >> item;
                        link.RemoveKey(item);
                        cout << "--Delete Element--\n";
                        link.print();
                        sz--;
                        break;
                    case 7:
                        cout << "The Linked list before reversed: \n";
                        link.print();
                        link.reverse();
                        cout << "--Reversed List--\n";
                        link.print();
                        break;
                    case 8:
                        cout << "Input the item want to search its: \n";
                        cin >> item;
                        link.search(item);
                        cout << "--the values in the linked list--\n";
                        link.print();
                        break;
                    case 9:
                        exit(0);
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
            } while (choice != 9);
        }
        else if (typeLL == 2)
        {
            do {
                cout << "----DLL----" << endl;
                cout << "1.Insert At First. \n";
                cout << "2.Insert At Last. \n";
                cout << "3.Insert At pos. \n";
                cout << "4.remove At first. \n";
                cout << "5.remove at last. \n";
                cout << "6.remove key. \n";
                cout << "7.reverse display. \n";
                cout << "8.Exit.\n";
                cout << "Input what you want: \n";
                cin >> choice;
                switch (choice)
                {
                    case 1:
                        cout << "List Before insert item. \n";
                        DLink.display();
                        cout << "==========================\n";
                        cout << "Input the item want to add in the linked list: \n";
                        cin >> item;
                        DLink.insertAtFirst(item);
                        cout << "--Insert At First--\n";
                        DLink.display();
                        sz++;
                        break;
                    case 2:
                        cout << "List Before insert item. \n";
                        DLink.display();
                        cout << "==========================\n";
                        cout << "Input the item want to add in the linked list: \n";
                        cin >> item;
                        DLink.insertAtTail(item);
                        cout << "--Insert At Last--\n";
                        DLink.display();
                        sz++;
                        break;
                    case 3:
                        cout << "List Before insert item. \n";
                        DLink.display();
                        cout << "==========================\n";
                        cout << "Input the item want to add in the linked list: \n";
                        cin >> item;
                        cout << "What the Index you want to add th item in: \n";
                        cin >> index;
                        DLink.insertAtPos(index, item);
                        cout << "--Insert At Position--\n";
                        DLink.display();
                        sz++;
                        break;
                    case 4:
                        cout << "List Before delete item. \n";
                        DLink.display();
                        cout << "==========================\n";
                        DLink.removeAtFirst();
                        cout << "--Delete At First--\n";
                        DLink.display();
                        sz--;
                        break;
                    case 5:
                        cout << "List Before delete item. \n";
                        DLink.display();
                        cout << "==========================\n";
                        DLink.removeAtLast();
                        cout << "--Delete At Last--\n";
                        DLink.display();
                        sz--;
                        break;
                    case 6:
                        cout << "List Before delete item. \n";
                        DLink.display();
                        cout << "==========================\n";
                        cout << "Input the item want to delete form the linked list: \n";
                        cin >> item;
                        DLink.removeKey(item);
                        cout << "--Delete Element--\n";
                        DLink.display();
                        sz--;
                        break;
                    case 7:
                        cout << "List Before reverse list. \n";
                        DLink.display();
                        cout << "==========================\n";
                        cout << "--Reverse Display--\n";
                        DLink.reverseDisplay();
                        break;
                    case 8:
                        exit(0);
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
            } while (choice != 8);
        }

        cout << "Do you want to perform more operations? (1: Yes, 0: No): ";
        cin >> repeatChoice;
        while (repeatChoice != 0 && repeatChoice != 1)
        {
            cout << "Invalid choice. Please try again: ";
            cin >> repeatChoice;
        }
    }

    return 0;
}
