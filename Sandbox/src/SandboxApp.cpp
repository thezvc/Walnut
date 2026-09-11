#include <Walnut.h>

class SandBox : public Walnut::Application
{
public:
    SandBox(){}

    ~SandBox(){}
};

int main()
{
    SandBox* sandbox = new SandBox();
    sandbox->Run();
    delete sandbox;
}