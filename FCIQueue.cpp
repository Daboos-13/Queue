//
//

#include "FCIQueue.h"
#include <iostream>
#include <algorithm>

template<class T>
void FCIQueue<T>::enqueue(T value) {
        st1.push(value);
}

template<class T>
void FCIQueue<T>::dequeue() {
    if (st2.empty()){
        if (!st1.empty()){
            while (!st1.empty()){
                auto iter = st1.top();
                st2.push(iter);
                st1.pop();
            }
            st2.pop();
        }else{
            std::cerr<<"the queue is already empty"<<std::endl;
        }
    }else{
        st2.pop();
    }
}

template<class T>
void FCIQueue<T>::clear() {
    while (!st1.empty()){
        st1.pop();
    }
    while (!st2.empty()){
        st2.pop();
    }

}

template<class T>
bool FCIQueue<T>::isEmpty() {
    return st1.empty() && st2.empty();
}

template<class T>
T FCIQueue<T>::first() {
    if (!st2.empty()){
        auto iter = st2.top();
        return iter;
    }else{
        std::stack<T> temp ;
        while (!st1.empty()){
            auto iter = st1.top();
            temp.push(iter);
            st1.pop();

        }
        auto iter = temp.top();
        T data =  iter;
        while (!temp.empty()){
            auto iter1 = temp.top();
            st1.push(iter1);
            temp.pop();

        }
        return data;

    }

}

template<class T>
void FCIQueue<T>::print() {
    if (st1.empty() && st2.empty()){
        std::cout<<"[ queue is empty ]"<<std::endl;
        return;
    }
    std::cout<<"[ ";
    std::stack<T> temp;
  while (!st2.empty()){
      auto iter = st2.top();
      std::cout<<iter<<" ";
      temp.push(iter);
      st2.pop();
  }
  while (!temp.empty()){
      st2.push(temp.top());
      temp.pop();
  }
  while (!st1.empty()){
      temp.push(st1.top());
      st1.pop();
  }
  while (!temp.empty()){
      std::cout<<temp.top()<<" ";
      st1.push(temp.top());
      temp.pop();
  }
  std::cout<<"]"<<std::endl;

}
