//
//

#ifndef Q3_1_QUEUE_FCIQUEUE_H
#define Q3_1_QUEUE_FCIQUEUE_H
#include <stack>

template<class T>
class FCIQueue {
private:
    std::stack<T>st1;
    std::stack<T> st2;
public:
    FCIQueue()= default;
    void enqueue(T value);
    void dequeue();
    void clear();
    bool isEmpty();
    T first();
    void print ();



};



#endif //Q3_1_QUEUE_FCIQUEUE_H
