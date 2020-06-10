#include <iostream>

#include "a.h"
#include "b.h"
#include "c.h"

int main()
{
    std::cout << "hey";
    A a;
    B b;
    C c;
    funcA();
    funcB();
    funcC();
    std::cout << a.a << b.b << c.c << "\n";
}
