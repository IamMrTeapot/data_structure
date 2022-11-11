#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
    for (auto it = a; it!=b ;it++){
        if(*it==value){
            it.ptr->next->prev = it.ptr->prev;
            it.ptr->prev->next = it.ptr->next;
            mSize--;

            node *n = new node(*it,output.mHeader,output.mHeader->next);


            output.mHeader->next->prev = n;
            output.mHeader->next = n;

            output.mSize++;


        }

    }
}

#endif
