#include <iostream>

namespace user
{
  std::string input;  
}

void draw()
{
   std::cout<<"***###***"<<std::endl;
   std::cout<<"***###***"<<std::endl;
   std::cout<<"*#######*"<<std::endl;
   std::cout<<"*#######*"<<std::endl;
   std::cout<<"***###***"<<std::endl;
   std::cout<<"***###***"<<std::endl;
   std::cout<<"***###***"<<std::endl;
   std::cout<<"\n\n";
   std::cout<<"Type anything to exit"<<std::endl;
   std::cin>>user::input;
}

int main()
{
   draw();
   return 0; 
}