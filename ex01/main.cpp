#include "iter.hpp"

void print(int a)
{
  std::cout<< a << std::endl;
}

int main()
{
  int a[4] = {1,2,3,4};

  iter(a,4, print);
}
