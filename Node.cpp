#include "Node.h"
#include <iostream>
using namespace std;

Node::Node()
{
 data = 0;
    next = NULL;
}
Node::Node(int d)
{
 data = d;
    next = NULL;
}
void Node::setNext(Node *n)
{
 next = n;
}
void Node::setPrevious(Node *n)
{
 previous = n;
}
void Node::setData(int n)
{
 data = n;
}
int Node::getData()
{
 return data;
}
Node * Node::getNext()
{
 return next;
}
Node * Node::getPrevious()
{
 return previous;
}
void Node::display()
{
 cout<<data<<" ";
}
