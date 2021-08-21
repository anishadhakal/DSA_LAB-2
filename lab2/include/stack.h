#include <iostream>
#include <cstdlib>
#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
  public:
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void push( T element) = 0;
    virtual T pop() = 0;
    virtual T top()=0;
};

template <class T>
class ArrayStack : public Stack<T>
{
 private:
   T *data;
   int TopIndex;
   int maxStackSize;
 public:
 
    //ArrayStack();
    ArrayStack(int size)
    {
      data = new T[size];
      maxStackSize = size ;
      TopIndex = -1 ;

    }
    bool isEmpty()
    {
      return TopIndex == -1;  
       
    }

    bool isFull() 
    {
        return TopIndex == maxStackSize - 1;
    }

    void push( T element)
    {
        if(isFull())
        {
            std::cout << "Stack is FULL." << std::endl;
        }
        else
        {
           std::cout << "Inserting element: " << element << std::endl;
           data[++TopIndex] = element;
        }
    }

    T pop()
    {
        if(isEmpty())
        {
            std::cout << "Stack is EMPTY." << std::endl;
        }
        else
        {
           return data[TopIndex--] ;
        }

    }

    T top()
    {
        if(!isEmpty())
        {
          return data[TopIndex];
        }
        else
        {
          std::cout << "Stack is EMPTY." << std::endl;
        }
    }



};

#endif
