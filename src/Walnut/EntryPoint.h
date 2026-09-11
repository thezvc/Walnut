#pragma once

#include "Walnut/Application.h"
#include "Walnut/Log.h"

#ifdef WN_PLATFORM_WINDOWS

extern Walnut::Application* Walnut::CreateApplication();

int main(int argc, char** argv)
{
    Walnut::Log::Init();
    Walnut::Log::GetCoreLogger()->warn("Initialized Log!");
    Walnut::Log::GetClientLogger()->info("Hello!");

    (void)argc;
    (void)argv;

    auto app = Walnut::CreateApplication();
    app->Run();
    delete app;
}

#endif