
#include "../src/MathEngine/math_engine.h"
#include "config.hpp"

int main(){
    int result = 0;
    int num1 = 3; int  num2 = 4;
    result = add(num1, num2);
    std::cout <<"The result of addition between " << num1<< " and " << num2 << " is: " << result << std::endl;
    std::cout << "the project name is:     " << project_name << " version: " << project_version << std::endl;
    std::cout << "the project author:      " << project_author << std::endl;
    std::cout << "the project version:     " << project_version << std::endl;
    std::cout << "the project license:     " << project_license << std::endl;
    std::cout << "the operating system is: " << operating_system << std::endl;
    std::cout << "the c++ standard is:     " << cpp_standard << std::endl;


    return 0;
}