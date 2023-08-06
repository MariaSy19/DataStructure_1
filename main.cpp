#include <iostream>
#include "linkedList.h"
using namespace std;
int main() {
    linkedList<int >link;
    link.insertFirst(10);
    link.insertFirst(30);
    link.insertFirst(50);
    link.insertFirst(100);
    link.print();
    return 0;
}
