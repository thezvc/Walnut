#pragma once

#include "Walnut/Application.h"
#ifdef WN_PLATFORM_WINDOWS

extern Walnut::Application* Walnut::CreateApplication();

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;

    auto app = Walnut::CreateApplication();
    app->Run();
    delete app;
}

#endif