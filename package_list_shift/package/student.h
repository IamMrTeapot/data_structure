#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
    node* tmp = mHeader->next;
    mHeader->next->next->prev = mHeader;
    mHeader->next = tmp->next;
    mHeader->prev->next = tmp;
    tmp->prev = mHeader->prev;
    mHeader->prev = tmp;
    tmp->next = mHeader;

}

#endif
