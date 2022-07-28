#include <iostream>
class Node
{
public:
 Node();
    Node(int);
    void setNext(Node *);
 void setPrevious(Node *);
    void setData(int);
    int getData();
    Node * getNext();
 Node * getPrevious();
    void display();
private:
    int data;
    Node *next;
 Node *previous;
};
