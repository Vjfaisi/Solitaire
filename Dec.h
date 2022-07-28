#include "Queue.h"

class Dec
{
public:
 Dec();
 void init();
 void shuffleDeck();
 bool notFull();
 Queue qu;
private:
 bool *dec;

};
