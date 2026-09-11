#include <Walnut.h>

class SandBox : public Walnut::Application
{
public:
    SandBox(){}

    ~SandBox(){}
};

Walnut::Application* Walnut::CreateApplication()
{
    return new SandBox();
}