#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array{
  private : 
    unsigned int _n;
    T *arr ;
  public : 
    Array(void);
    Array(unsigned n);
    Array(Array const &arr);
    Array &operator=(Array  &arr);
    T &operator[](unsigned int i);
    unsigned int size(void)const;
    class OutofBounds : public std::exception {
    public : 
      const char *what() const throw()
      {
        return "index out of bounds";
      }
    };
    ~Array(void);
};

#include "Array.tpp"

#endif // !ARRAY_H
