#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
    for (int i =0; i< K ; i++){
        if (empty()){
            break;
        } else {
            pop();
        }
    }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
    std::stack<T> a,b;
    for (int i =0; i< K ; i++){
        if (empty()){
            break;
        } else {
            a.push(top());
            pop();
        }
    }
    while(!a.empty()){
        b.push(a.top());
        a.pop();
    }
    return b;

}

#endif
