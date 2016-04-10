#include "SingletonClass.h"


SingletonClass* SingletonClass::sc=NULL;
int SingletonClass::numInstances=0;

SingletonClass* SingletonClass::GetInstance()
{
	if(!sc){
		sc = new SingletonClass();
	}

	numInstances++;   
	return sc;

}

void SingletonClass::DeleteInstance()
{
	numInstances--;

	if(numInstances<=0)
		delete this;
}


SingletonClass::SingletonClass()
{
	printf("Soy el constructor del singleton sc: %p this: %p\n", sc, this);
}

SingletonClass::~SingletonClass()
{
	printf("Soy el destructor\n");
}