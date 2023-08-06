#include <iostream>
#include "linkedList.h"
using namespace std;
int main() {
    linkedList<int >link;
    link.insertFirst(10);
    link.insertLast(9);
    link.insertFirst(33);
    link.insertLast(44);
    link.insertLast(87);
    link.insertFirst(765);
    link.insertAtPos(5,100);
    link.print();
    cout << "After Remove the first Node in the linked list: \n";
    link.RemoveAtFirst();
    link.print();
    return 0;
}
