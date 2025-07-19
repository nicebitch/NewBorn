#include <Newborn.h>

class Sandbox :public Newborn::Application {

public:
	Sandbox() 
	{

	}
	virtual ~Sandbox()
	{

	}
};

Newborn::Application* Newborn::CreateApplication()
{
	return new Sandbox();
}