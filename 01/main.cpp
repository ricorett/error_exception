#include <iostream>
#include <exception>

int function(std::string str, int forbidden_length);

int main(){
    std::string str;
    int forbidden_length = 0;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    try {
        while (true) {
            std::cout << "Введите слово: ";
            std::cin >> str;
            int str_size = function(str, forbidden_length);
            std::cout << "Длина слова \"" << str << "\" равна " << str.length() << std::endl;
        }
    }
        catch (std::length_error &err) {
            std::cout << "Ошибка: " << err.what();
        }

    return 0;
}


int function(std::string str, int forbidden_length){
    if(str.length() == forbidden_length){
        throw std::length_error("Вы ввели слово запретной длины! До свидания!");
    }
    return str.length();
}
