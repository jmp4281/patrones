#include "MementoStorage.h"

MementoStorage::MementoStorage() 
{

}


void  MementoStorage::addMemento(memento *m)
{
	mementos.push_back(m);
}

memento* MementoStorage::getMemento(int index)
{
	return mementos.at(index);

}