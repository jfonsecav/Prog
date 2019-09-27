#include<iostream>

int max(int a, int b);
double max(double a,double b);


int main (void)
{
  double n1=0;
  double n2=0;
  std::cin>>n1;
  std::cin>>n2;
  std::cout<<max(n1,n2)<< '\n';
  
  return 0;
  
}

int max (int a, int b)
{
  int result = 0;
  if (a>b){
    result = a;
  }

  else{
    result = b;
  }
  
  return result; 
}

double max (double a, double b){

  double result = 0;
  if (a>b){
    result = a;
  }
  else {

    result= b;
  }
  return result;
}
