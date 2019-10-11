#include <fstream>
#include <gsl/gsl_sf_bessel.h>

int main (void)
  
{
  
  for(double ii=0;ii<=7.5;ii+=0.1)
    {
      gsl_sf_bessel_J0 (ii);
  
    }
  
  return 0;
  
}
