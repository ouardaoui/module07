#ifndef ARRAY_TPP
#define ARRAY_TPP

/*
template <typename T>
Array<T>::Array():_n(0)
{
   this->arr = NULL; 
}
*/

template <typename T>
Array<T>::Array(unsigned int n):_n(n)
{
  this->arr = new T[n];
}

/*
template <typename T>
unsigned int Array<T>::size() const 
{
  return this->_n;
}

template  <typename T>
Array<T>::Array(Array const &arr):_n(arr.size())
{

  if(arr.size() == 0)
  {
    this->arr = NULL;
    return ;
  }

  if(this != &arr )
  {
    if(this->arr != NULL)
      delete this->arr;
    this->arr = new T[_n];
    for(int i = 0 ; i < arr.size(); i++)
      this->arr[i] = arr.arr[i];
  }
  return;
}

template  <typename T>
Array<T> &Array<T>::operator=(Array const &arr)
{#ifndef ARRAY_TPP
#define ARRAY_TPP
  if(arr.size() == 0)
  {
    this->arr = NULL; 
    return *this;
  }

  if(this != &arr )
  {
    if(this->arr != NULL)
      delete this->arr;
    this->arr = new T[_n];
    for(int i = 0 ; i < arr.size(); i++)
      this->arr[i] = arr.arr[i];
  }
  return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
  try 
  {
    if(i < 0 && i >= this->size())
      throw Array<T>::OutofBounds();
  }
  catch(Array::OutofBounds &e)
  {
    std::cout<< e.what() << std::endl;
  }      
  return this->arr[i];
}

template <typename T>
Array<T>::~Array()
{
   if(this->_n)
    delete this->arr;
}
*/
#endif
