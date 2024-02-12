#include <iostream>
#include <exception>

enum errors{
OK,
BAD_LENGHT
};

int function(std::string str, int forbidden_lenght){
try
  {
    while(str.size() != forbidden_lenght){
        std::cin >> forbidden_lenght;
    }
 
  }
catch();
    return OK;
}