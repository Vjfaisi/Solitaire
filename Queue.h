#include"Node.h"
class Queue
{
public:
 Queue();
 bool isEmpty();
 void enQueue(int);
 void deQueue();
 void display();
 void displayReverse();
 Node * getFront();
private:
 Node * front;
 Node * rear;
 int size;
};
