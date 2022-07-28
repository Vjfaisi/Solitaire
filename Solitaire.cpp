// Solitare.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Dec.h"
using namespace std;

class Solitare
{
public:
 Solitare();
private:
 Queue q;
 Stack st1,st2,st3,st4;
 Stack a1,a2,a3,a4,a5,a6,a7;
 Dec *d;
};
Solitare::Solitare()
{
 d=new Dec();
 Node *temp= d->qu.getFront();
 a1.push(temp->getData());
 temp=temp->getNext();
 a2.push(temp->getData());
 temp=temp->getNext();
 a2.push(temp->getData());
}

int main()
{
 Solitare *s=new Solitare();
 return 0;
}
