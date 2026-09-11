#pragma once

#include "Walnut/Core.h"
#include <memory>
#include <spdlog/spdlog.h>

namespace Walnut {

    class WALNUT_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
       static std::shared_ptr<spdlog::logger> s_CoreLogger;
       static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}