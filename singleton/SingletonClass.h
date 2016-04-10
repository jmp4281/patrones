#include <stdio.h>

class SingletonClass
{
	public:
		static SingletonClass* GetInstance();
		void DeleteInstance();
	private:

		SingletonClass();
		~SingletonClass();
		static int numInstances;
		static SingletonClass *sc;
		
};
