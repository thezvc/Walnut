#pragma once

#include "Walnut/Application.h"
#include "Walnut/Log.h"

#ifdef WN_PLATFORM_WINDOWS

extern Walnut::Application* Walnut::CreateApplication();

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    int a=5;
    Walnut::Log::Init();
    WN_CORE_WARN("Initialized Log!");
    WN_INFO("Hello! var={0}", a);

    auto app = Walnut::CreateApplication();
    app->Run();
    delete app;
}

#endif