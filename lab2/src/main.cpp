
#include "stack.h"
#include "queue.h"

int main()
{
 ArrayStack<int> st(5);
 st.push(1);
 st.push(2);
 st.push(3);

 std::cout << "Top Element: " << st.top() << std::endl;
 std::cout << "Popped Element: " << st.pop() << std::endl;
 std::cout << "Top Element: " << st.top() << std::endl;
 std::cout << "Popped Element: " << st.pop() << std::endl;
 std::cout << "Popped Element: " << st.pop() << std::endl;

 



 ArrayQueue<float> q(5);

 q.enqueue(1.3);
 q.enqueue(1.4);
 q.enqueue(1.5);
 q.enqueue(1.6);
 q.enqueue(1.7);
 
std::cout << "The front element is " << q.Front() << std::endl;
std::cout << "The rear element is " << q.back() << std::endl;
 
 q.dequeue();
 q.dequeue();
 q.dequeue();
 q.dequeue();

 std::cout << "The front element is " << q.Front() << std::endl;
 std::cout << "The rear element is " << q.back() << std::endl;
 

 

return 0;
}