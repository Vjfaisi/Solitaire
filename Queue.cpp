#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
 front=NULL;
 rear=NULL;
 size=0;
}
bool Queue::isEmpty()
{
 if (front==NULL&&rear==NULL)
 {
  return true;
 }
 else
 {
  return false;
 }
}
void Queue::enQueue(int a)
{
 Node *n=new Node(a);
 if (this->isEmpty())
 {
  front=n;
  rear=n;
  n->setPrevious(NULL);
 }
 else
 {
  rear->setNext(n);
  n->setPrevious(rear);
  rear=n;
 }
 size++;
}
void Queue::deQueue()
{
 Node * temp=front;
 front=front->getNext();
 temp->setNext(NULL);
 delete temp;
 temp=NULL;
}
void Queue::display()
{
 Node *temp=front;
 while(temp != NULL)
    {
  temp->display();
        temp = temp->getNext();
    }
}
void Queue::displayReverse()
{
 Node *temp=rear;
 do
    {
  temp->display();
        temp = temp->getPrevious();
    }
 while(temp != NULL);
}
Node * Queue::getFront()
{
 return front;
}
