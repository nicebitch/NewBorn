#pragma once
#include "Core.h"

namespace Newborn {

	class Newborn_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	 };

	Application* CreateApplication();
}