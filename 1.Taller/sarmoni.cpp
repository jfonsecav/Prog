#include <iostream>
  
int main(void)
{
  double n = 0.0; // 
  double x = 0.0;
  double y = 0.0;
  std::cout <<"Este programa calcula la sumatoria armonica de i hasta N"<<'\n'<<"donde   1<=N<=1000"<< '\n';
  std::cout <<"N"<<"     "<<"Sumatoria"<<'\n';
  while (n<1000){
    y = x;  // y almacena el ultimo x, permitiendome realizar la sumatoria
    n = n+1; // aumento +1 a la variable n
    x = 1/n;
    x = x+y; // el nuevo x almacena las suma anterior con el nuevo valor
    std::cout <<n<<"       "<<x<<'\n';
  }


  return(0);
}
