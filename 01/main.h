#include <iostream>
#include <exception>

enum errors{
OK,
BAD_LENGHT
};

int function(std::string str, int forbidden_lenght);