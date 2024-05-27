#include "Example.h"

ClassExample::ClassExample()
{
    std::cout << "Class Example created" << std::endl;
}

int ClassExample::add_numbers(int n1, int n2)
{
    return (n1 + n2);
}

int ClassExample::subtract_numbers(int n1, int n2)
{
    return (n1 - n2);
}
