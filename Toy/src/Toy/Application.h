#pragma once

#include"macro.h"
namespace Toy
{

	class TOY_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};


	//Client
	Application* CreateApplication();
}