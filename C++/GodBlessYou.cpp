//OS-developers/God

#include <iostream>

namespace user
{
    std::string input;
}

void func() 
{
    std::cout<<"God bless you"<<std::endl;
    std::cout<<"Type anything to exit"<<std::endl;
    std::cout<<"answer> ";
    std::cin>>user::input;
}

int main()
{
    func();
    return 0;
}