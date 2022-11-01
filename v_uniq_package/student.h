#ifndef __STUDENT_H_
#define __STUDENT_H_
//you can include any other file here
//you are allow to use any data structure
#include <set>


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
    std::set<T> a;
    CP::vector<T> b;
    for (int i =0;i<mSize;i++){
        if (a.find(mData[i])==a.end()){
            a.insert(mData[i]);
            b.push_back(mData[i]);
        }
    }
    using std::swap;

    swap(this->mSize, b.mSize);
    swap(this->mCap,b.mCap);
    swap(this->mData,b.mData);



}

#endif
