#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
    if (a==b || mSize==0){
        return iterator();
    }


    auto rtn = b;
    --rtn;
    auto c = a;
    --c;
    c.ptr->next = rtn.ptr;
    b.ptr->prev = a.ptr;
    a.ptr->prev = b.ptr;
    rtn.ptr->next = c.ptr;



    for(auto it = a; it!=rtn;--it){

        std::swap(it.ptr->next,it.ptr->prev);

    }
    std::swap(rtn.ptr->next,rtn.ptr->prev);


    return rtn;
}

#endif
