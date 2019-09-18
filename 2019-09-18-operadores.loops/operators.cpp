#include <iostream>

int main (void)
{
  int a{2};
  int b{3};
  a = (b=3,b+10);
  std::cout<<a               <<'\n';
  std::cout<< ((5==5)&&(3>6))<<'\n';
  return (0);
}
