#ifndef __OBSERVER__
#define __OBSERVER__

#include <iostream>
using namespace std;

class Observer
{
	public:
		Observer();
		virtual void update(string newState)=0;
};
#endif