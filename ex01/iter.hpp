#ifndef  ITER_H
#define ITER_H

#include<iostream>

template <typename T, typename U>
void iter(T &a,size_t len,U &f)
{
  for(int i = 0; i < len; i++)
    f(a[i]);
}

#endif // ! ITER_HPP
