#include "iostream"
using namespace std;
#include "Foo_Func.h"
#include "Structs.h"

int main()
{
    
    Animals name;
    name.age = 25;
    std::cout << "Age:=" << name.age<<"\n";
    Foo();
    return 0;
}