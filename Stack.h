#include<iostream>
class Stack
{
public:
 Stack();
 Stack(int);
 void init();
 void push(int);
 void pull();
 void display();
private:
 int top;
 int *ptr;
 int size;
};
