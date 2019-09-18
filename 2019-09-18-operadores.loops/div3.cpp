#include<iostream>

int main(void)
{
  int x{0};
  std::cout<<"Escriba un numero"<<'\n';
  std::cin>>x;
  if(x%3==0){
    std::cout<<"El numero "<<x<<" es divisible en 3"<<'\n';
    std::cout<<"El numero "<<x<<" es divisible en 3"<<'\n';
  }
  else{
    std::cout<<"El numero "<<x<<" no es divisible en 3"<<'\n';
  }
  
  return (0);
}
