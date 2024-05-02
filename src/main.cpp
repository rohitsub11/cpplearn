#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;

public:
    Entity()
        : m_Name("unknown")
    {
    }
    Entity(const std::string name)
        : m_Name(name)
    {
    }

    const std::string &GetName() const
    {
        return m_Name;
    }
};

int main(int argc, char **argv)
{
    Entity *e0 = new Entity("Rohit");
    std::cout << e0->GetName() << std::endl;

    std::cin.get();
}