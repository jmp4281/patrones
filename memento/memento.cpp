#include "memento.h"

memento::memento(string stateToSave)
{
	state = stateToSave;
}

string memento::getSavedState()
{
	return state;
}

