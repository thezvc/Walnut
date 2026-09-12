#pragma once

#include "Walnut/Application.h"
#include "Walnut/Log.h"

#ifdef WN_PLATFORM_WINDOWS

extern Walnut::Application* Walnut::CreateApplication();

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    Walnut::Log::Init();

    auto app = Walnut::CreateApplication();
    app->Run();
    delete app;
}

#endif