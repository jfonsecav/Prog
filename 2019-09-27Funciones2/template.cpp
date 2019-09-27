#include<iostream>

template <typename A,typename B>
A max(A a, B b)
{
  A result = 0;
  
  if (a>=b){
    result = a;
  }
  
  else{
    
    result = b;
    
  }
  
  return result; 
}


int main(void)
{
  std::cout<<"El numero mayor es  "<<max (1,2)<<'\n';
  std::cout<<"El numero mayor es  "<<max (-7,1.1)<<'\n';
  
  return 0;
}
