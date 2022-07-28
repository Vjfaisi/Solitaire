#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack()
{
 size=26;
 top=-1;
 ptr=new int [size];
}
Stack::Stack(int a)
{
 size=a;
 top=-1;
 ptr=new int [size];
}
void Stack::init()
{
 for (int i=0;i<size;i++)
 {
  ptr[i]=0;
 }
}
void Stack::push(int x)
{
 top=top+1;
 ptr[top]=x;
}
void Stack::pull()
{
 ptr[top]=0;
 top=top-1;
}
void Stack::display()
{
 cout<<"Stack Is:"<<endl;
 for (int i=top;i>=0;i--)
 {
  cout<<ptr[i]<<endl;
 }
 cout<<endl;
}
