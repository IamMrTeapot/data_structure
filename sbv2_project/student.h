#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
  //write your code here
    return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
  //write your code here
    return v[v.size()-1];
}

template <typename T>
void CP::stack<T>::push(const T& element) {
  //write your code here
    v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
  //write your code here
    v.erase(v.end()-1);
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
  //write your code here
    v.push_back(element);
    if (depth >= v.size()){
        depth = v.size()-1;
    }
    for (int i = v.size()-1;i>v.size()-depth-1;i--){
        v[i] = v[i-1];
    }
    v[v.size()-depth-1]= element;
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
  //write your code here
    for (auto &ele : w){
        push(ele);
    }

}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
  //write your code here
    while (!empty() && top()!=e){
        pop();
    }
}

#endif

