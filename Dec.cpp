#include "Dec.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Dec::Dec()
{
 dec=new bool[52];
 init();
 shuffleDeck();
}
void Dec::init()
{
 for (int i=0;i<52;i++)
 {
  dec[i]=false;
 }
}
void Dec::shuffleDeck()
{

 while (notFull())
 {

  int color=(rand()%4)+1;
  int number=(rand()%13)+1;
  if (color==1)
  {
   for (int i=0;i<13;i++)
   {
    if (i==number-1&&dec[i]==false)
    {
     dec[i]=true;
     cout<<i<<" ";
    }
   }
  }
  else if (color==2)
  {
   for (int i=13;i<26;i++)
   {
    if (i==number+12 && dec[i]==false)
    {
     dec[i]=true;
     cout<<i<<" ";
    }
   }
  }
  else if(color==3)
  {
   for (int i=26;i<39;i++)
   {
    if (i==number+25&&dec[i]==false)
    {
     dec[i]=true;
     cout<<i<<" ";

    }
   }
  }
  else if (color==4)
  {
   for (int i=39;i<52;i++)
   {
    if (i==number+38&&dec[i]==false)
    {
     dec[i]=true;
     cout<<i<<" ";
    }
   }
  }

  int number;=rand()%52;
  for (int i=0;i<52;i++)
  {
   if (i==number&&dec[i]==false)
   {
    dec[i]=true;
    qu.enQueue(i);
   }
  }
 }
 qu.display();
 cout<<endl<<endl;
 Node *temp= qu.getFront();
 temp->display();


}
bool Dec::notFull()
{
 bool b=false;
 for (int i=0;i<52;i++)
 {
  if (dec[i]==false)
  {
   b=true;
   break;
  }
 }
 return b;
}
