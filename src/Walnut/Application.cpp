#include "wnpch.h"
#include "Application.h"

#include "Walnut/Log.h"
#include "Walnut/Events/ApplicationEvent.h"
#include <memory>

namespace Walnut {

    Application::Application()
    {
        m_Window = std::unique_ptr<Window>(Window::Create());
    }

    Application::~Application()
    {

    }

    void Application::Run() {
        while(m_Running) {
            m_Window->OnUpdate();
        }
    }

}