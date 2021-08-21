#include <iostream>
#include <cstdlib>

template <class T>
class Queue
{
virtual bool isEmpty()= 0;
virtual bool isFull()= 0;
virtual void enqueue(T value)=0;
virtual T dequeue()=0;
virtual T Front()=0;
virtual T back()=0;

};

template <class T>
class ArrayQueue : public Queue<T>
{
private:
   T *data;
   int maxQueueSize;
   int front,rear;

public:
    ArrayQueue(int size)
    {
        data = new T[size];
        maxQueueSize = size;
        front = -1;
        rear = -1;
    }
    virtual bool isEmpty()
    {
     if(rear==front)
     {return true;}
     else
     {return false;}
    }

    virtual bool isFull()
    {
        if(rear==maxQueueSize -1)
        {return true;}
        else
        {return false;}
    }
    
    virtual void enqueue(T value)
    {
        if(isFull())
        {
            std::cout << "Queue is FULL." << std::endl;
        }
        std::cout << "Inserting element: " << value << std::endl;
        rear = rear + 1 ;
        data[rear]=value;

    }

    virtual T dequeue()
    {
       if(isEmpty())
       {
           std::cout << "Queue is EMPTY." << std::endl;
       }
       
       front++;
       std::cout << "Removing element: " << data[front] << std::endl;
       
    }

    virtual T Front()
    {
       if (isEmpty())
       {
        std::cout << "Queue is EMPTY.";
       }
  
    return data[front + 1];
    }

   virtual T back()
   {
          if (isEmpty())
       {
        std::cout << "Queue is EMPTY.";
       }
  
    return data[rear];
    

   }

}; 