#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  // your code here
    auto temp = mData;
    size_t sizee = mSize;
    size_t cap = mCap;

    mData = other.mData;
    mSize = other.mSize;
    mCap = other.mCap;

    other.mData = temp;
    other.mSize = sizee;
    other.mCap = cap;


}

#endif
