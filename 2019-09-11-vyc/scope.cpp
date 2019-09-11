#include <iostream>

const double X= 5.6 ; // VARIABLE CONTANTES
int main(void)
{
  double x=7.4; // DECLARO VARIABLE X DENTRO DE UN SCOOP
  std:: cout << &x << "\n";
  {
    std:: cout << &x << "\n";
    double x= 7.4;// DECLARO VARIABLE DENTRO DE UN SUB SCOOP
    std:: cout << &x << "\n";
  }
  std:: cout << &x << "\n";
  return 0;
  
}
