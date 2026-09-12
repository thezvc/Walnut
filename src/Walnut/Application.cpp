#include "wnpch.h"
#include "Application.h"

#include "Walnut/Log.h"
#include "Walnut/Events/ApplicationEvent.h"

namespace Walnut {

    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    void Application::Run() {
        WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
		    WN_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			WN_TRACE(e);
		}
        while(true);
    }

}