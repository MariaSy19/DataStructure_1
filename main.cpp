#include <iostream>
#include "linkedList.h"
using namespace std;
int main()
{
    //Sll
    linkedList<int> link ;
    int sz , items , item, index;
    cout << "what the size of list you want: \n";
    cin >> sz;
    
    for (int i = 0; i < sz; ++i)
    {
        cout << "Input the value: \n";
        cin >> items;
        link.insertLast(items);
    }
    int choice ;

        do {
            cout << "----SLL----" << endl;
            cout << "1.Insert At First. \n";
            cout << "2.Insert At Last. \n";
            cout << "3.Insert At position. \n";
            cout << "4.Remove From First. \n";
            cout << "5.Remove From last. \n";
            cout << "6.Remove From Key. \n";
            cout << "7.Exist.\n";
            cout << "Input what you want: \n";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Input the item want to add in the linked list: \n";
                    cin >> item;
                    link.insertFirst(item);
                    cout << "--Insert At First--\n";
                    link.print();
                    break;
                case 2:
                    cout << "Input the item want to add in the linked list: \n";
                    cin >> item;
                    link.insertLast(item);
                    cout << "--Insert At Last--\n";
                    link.print();
                    break;
                case 3:
                    cout << "Input the item want to add in the linked list: \n";
                    cin >> item;
                    cout << "What the Index you want to add th item in: \n";
                    cin >> index;
                    link.insertAtPos(index, item);
                    cout << "--Insert At Position--\n";
                    link.print();
                    break;
                case 4:
                    link.RemoveAtFirst();
                    cout << "--Delete At First--\n";
                    link.print();
                    break;
                case 5:
                    link.RemoveAtLast();
                    cout << "--Delete At Last--\n";
                    link.print();
                    break;
                case 6:
                    exit(0);
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }
        } while (choice != 6);




    return 0;
}
