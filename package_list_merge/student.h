#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
    for(auto it = ls.begin();it!=ls.end();it++){
        mSize+= it->size();
        it->mHeader->next->prev = mHeader->prev;
        it->mHeader->prev->next = mHeader->prev->next;
        mHeader->prev->next = it->mHeader->next;
        mHeader->prev = it->mHeader->prev;

        it->mSize =0 ;
        it->mHeader->prev = it->mHeader;
        it->mHeader->next = it->mHeader;
    }

}

#endif
